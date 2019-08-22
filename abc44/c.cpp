#include<iostream>
using namespace std;
typedef long long ll;
#define sup 
int main(){
    ll n,a;
    cin >> n >> a;
    ll x[n];
    ll max = a;
    for(ll i =0;i<n;i++){
        cin >> x[i];
        if(max < x[i]){
            max = x[i];
        }
    }
    ll dp[n+1][n+1][(max+1)*(n+1)];

    for(ll j=0;j<=n;j++){
        for(ll k = 0;k<=max*n;k++){
            dp[0][j][k] = 0;
        }
    }
    dp[0][0][0] = 1;
    
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=n;j++){
            for(ll k=0;k<=max*n;k++){
                if(k < x[i-1]){
                    dp[i][j][k] = dp[i-1][j][k];
                }
                else if(k-x[i-1] >= 0 && j >= 1){
                    dp[i][j][k] = dp[i-1][j][k] + dp[i-1][j-1][k-x[i-1]];
                }
                else{
                    dp[i][j][k] = 0;
                }
                //cout << "dp[" << i <<"][" <<j<<"][" << k << "]=" << dp[i][j][k] << endl; 
            }
        }
    }
    ll ans =0;
    for(int j=1;j<=n;j++){
        ans += dp[n][j][j*a];
    }
    cout << ans << endl;
    return 0;
}