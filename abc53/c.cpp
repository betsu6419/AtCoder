#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll x;
    cin >> x;
    ll q = x/(ll)(11);
    ll s = x%(ll)(11);
    ll ans;
    if(s <= 6 && s!=0){
        ans = 2*q+1;
    }
    else if(s>6){
        ans = 2*q+2;
    }
    else{
        ans = 2*q;
    }
    cout << ans << endl;
    return 0;
}