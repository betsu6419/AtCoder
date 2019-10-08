#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll a,n;cin >> a >> n;
    ll ans = 0;
    ll ma = 2*1e12;
    if(n == 0){
        cout << ma-a << endl;
        return 0;
    }
    while(ma > a){
        ans++;
        a+=1+n*a;
    }
    cout << ans << endl;
    return 0;
}