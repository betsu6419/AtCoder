#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll dp[n];
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    for(ll i = 2;i<n;i++){
        ll op1 = dp[i-2] + abs(a[i-2]-a[i]);
        ll op2 = dp[i-1] + abs(a[i-1]-a[i]);
        dp[i] = min(op1,op2);
    }
    cout << dp[n-1] << endl;
    return 0;
}