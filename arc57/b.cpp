#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;cin >> n >> k;
    ll a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum == k){
        cout << 1 << endl;
        return 0;
    }
    int dp[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            dp[i][j] = 0;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j] = 
        }
    }
}