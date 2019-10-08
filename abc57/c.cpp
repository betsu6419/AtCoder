#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll ans = 1000000000;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            ll j = n/i;
            ll d_i = to_string(i).length();
            ll d_j = to_string(j).length();
            if(max(d_i,d_j) < ans){
                ans = max(d_i,d_j);
            }

        }
    }
    cout << ans <<endl;
    return 0;
}