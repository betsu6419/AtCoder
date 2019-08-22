#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll t[n],a[n];
    for(ll i=0;i<n;i++){
        cin >> t[i] >> a[i];
    }
    ll l=t[0],r=a[0];
    for(ll i=1;i<n;i++){
        if(t[i] < l || a[i] < r){
            ll m = max((l-1+t[i])/t[i],(r-1+a[i])/a[i]);
            l = t[i] * m;
            r = a[i] * m;
        }   
        else{
            l = t[i];
            r = a[i];
        }
    }
    cout << l+r << endl;
    return 0;
}