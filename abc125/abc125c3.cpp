#include <iostream>
using namespace std;
int n;
int a[1000000];
int b[2][2000000];
int gdb(int n,int m){
    int tmp;
    if(n == 0){
        return m;
    }
    if(m == 0){
        return n;
    }
    if(n<m){
        tmp = m;
        m = n;
        n = tmp;
    }
    while(m != 0){
        tmp = m;
        m = n%m;
        n = tmp;
    }
    return n;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    b[0][0] = 0;
    for(int i=0;i<n;i++){
        b[0][i+1] = gdb(b[0][i],a[i]);
    }
    b[1][n] = 0;
    for(int i=1;i<=n;i++){
        b[1][n-i] = gdb(b[1][n-i+1],a[n-i]); 
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int tans = gdb(b[0][i],b[1][i+1]);
        if(tans > ans){
            ans = tans;
        }
    }
    cout << ans << endl;
    return 0;
}