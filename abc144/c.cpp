#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<utility>
#include<tuple>
#include<cmath>

using namespace std;
typedef long long ll;

int main(){
    ll n;cin >> n;
    ll ans = n;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            ll j = n/i;
            ans = min((ll)ans,(ll)(i+j-2));
        }
    }
    cout << ans << endl;
    return 0;
}