#include <iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define MOD 1000000007



ll f(ll a){
    ll ans;
    if(a%2 == 0){
        ans = (((a/2)*(a+1))%MOD);
    }
    else{
        ans = (((a+1)/2)*(a))%MOD;
    }
    
    return ans;
}

int main(){
    ll n;
    cin >>n;
    ll k;cin >> k;
    ll tmp = 0;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    vector<ll> left_low(n);
    vector<ll> right_high(n);
    vector<ll> left_high(n);
    vector<ll> right_low(n);

    for(ll i=0;i<n;i++){
        left_high[i] = 0;
        left_low[i] = 0;
        right_low[i] = 0;
        right_high[i] = 0;
        for(ll j=0;j<i;j++){
            if(a[i] > a[j]){
                left_low[i]++;
            }
            else if(a[i] < a[j]){
                left_high[i] ++;
            }
        }
        for(ll j=i+1;j<n;j++){
            if(a[i] < a[j]){
                right_high[i] ++;
            }
            else if(a[i] > a[j]){
                right_low[i] ++;
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans = (ans +(right_low[i]*f(k)%MOD + (left_low[i]*f(k-1))%MOD)%MOD)%MOD;
    }
    cout << ans << endl;
    //cout << f(2) << endl;

    return 0;
}