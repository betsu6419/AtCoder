#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int count[n+1];
    int maxn = 0;
    int maxc = 0;
    for(int i=0;i<=n;i++){
        count[i] = 0;
    }
    for(int i=0;i<(n-1);i++){
        cin >> a[i] >> b[i];
        count[a[i]] ++;
        count[b[i]]++;
        if(maxc < count[a[i]]){
            maxc = count[a[i]];
            maxn = a[i];
        }
        if(maxc < count[b[i]]){
            maxc = count[b[i]];
            maxn = b[i];
        }
    }
    int c[n];
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    long long  max= 0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        if(c[i] > max){
            max=c[i];
        }
        sum += c[i];
    }
    long long  ans = 0;
    ans = sum - max;
    cout << ans << endl;
    int tmp;
    if(maxn== 1){
        tmp = c[maxn-1];
        c[maxn-1] = c[n-1];
        c[n-1] = tmp;
    }
    else{
        tmp = c[maxn-1];
        c[maxn-1] = c[0];
        c[0] = tmp;
    }
     for(int i=0;i<n ;i++){
        cout << c[i] << " ";
    }
    cout << endl;
}