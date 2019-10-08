#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,t;
    cin >> n >> t;
    ll ans = 0;
    ll a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] = 1e9;
    for(int i=0;i<n;i++){
        if(a[i] + t >a[i+1])
            ans += a[i+1] - a[i];
        else{
            ans += t;
        }
    }
    cout << ans << endl;
    return 0;
}