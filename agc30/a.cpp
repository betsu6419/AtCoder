#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = 0;
    ans += min(c,a+b+1);
    ans += b;
    cout << ans << endl;
    return 0;
}