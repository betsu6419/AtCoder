#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,x;
    cin >> a >> b >> x;
    ll a_x = a/x;
    ll b_x = b/x;
    ll ans = b_x - a_x;
    if(a%x == 0){
        ans ++;

    }
    cout << ans  << endl;
    return 0;
}