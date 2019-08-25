#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll factorial(ll n){
    ll i = 1;
    ll ans = 1;
    while(i<=n){
        ans = (i*ans)%mod;
        i++;
    }
    return ans;
}

ll calc(ll a,ll b ,ll p){
    if(b == 0){
        return 1;
    }
    else if(b %2 == 0){
        ll d = calc(a,b/2,p);
        return ((d%p)*(d%p))%p;
    }
    else{
        return ((a%p)*calc(a,b-1,p))%p;
    }
}

int main(){
    ll w,h;cin >> w >> h;
    ll ans = (((factorial(w+h-2)*calc(factorial(h-1),mod-2,mod))%mod)*calc(factorial(w-1),mod-2,mod))%mod;
    cout << ans << endl;
    //cout << calc(1000,1000,mod) <<endl; 
    return 0;
}