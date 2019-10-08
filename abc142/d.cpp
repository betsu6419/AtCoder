#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll g(ll a,ll b){
    ll tmpa,tmpb,tmp;
    tmpa = a;tmpb = b;
    if(tmpa < tmpb){
        tmp = tmpb;
        tmpb  =tmpa;
        tmpa = tmp;
    }
    while(tmpb != 0){
        tmp = tmpa%tmpb;
        tmpa = tmpb;
        tmpb = tmp;
    }
    return tmpa;
}

int main(){
    ll a,b;cin >> a >> b;
    ll ma = g(a,b);
    int ans = 1;
    if(ma == 1){
        cout << ans << endl;
        return 0;
    }
    //cout << ma << endl;
    ll tmpma = ma;
    for(int i=2;i <= sqrt(tmpma)+1;i++){
        if(ma%i == 0){
            int j = ma/i;
            while(ma%i == 0){
                ma = ma/i;
            }
            ans ++;
        }
    }
    if(ma != 1){
        ans ++;
    }

    cout << ans << endl;
    return 0;
}