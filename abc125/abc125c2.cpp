#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n;
int a[100000];
queue<long> q;

int gcd(int n,int m){
    int tmp;
    if(n < m){
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
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];    
    }
    if(n == 2){
        cout << max(a[0],a[1]) << endl;
        return 0;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int tans = 0;
        while(!q.empty()){
            q.pop();
        }
        for(int j = 0;j<n;j++){
            if(j==i){

            }
            else{
                q.push(a[j]);
            }
        }
         tans = solve();
         if(tans > ans){
             ans = tans;
         }
    }
    cout << ans << endl;
    return 0;
}