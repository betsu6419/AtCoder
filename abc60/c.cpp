#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n,T;
    cin >> n >> T;
    ll ans = 0;
    ll t[n];
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    for(int i=0;i<n-1;i++){
        ans += min(t[i+1]-t[i],T);
    }
    ans += T;
    cout << ans << endl;
    return 0;
}