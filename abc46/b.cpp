#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;
    cin >> n >> k;
    ll ans  =0;
    ans = k * pow(k-1,n-1);
    cout << ans << endl;
    return 0;
}