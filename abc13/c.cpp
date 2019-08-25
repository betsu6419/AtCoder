#include<iostream>
#include<cmath>

using namespace std;
typedef long long ll;
int main(){
    ll n,k,a,b,c,d,e;
    cin >> n >> k >> a >> b >> c >> d >> e;
    ll ans = 1e15;
    for(ll i=0;i<=n;i++){
        ll j = max((ll)0,(ll)floorl((double)((n-i)*e-k-b*i)/(double)(d+e)) + 1);
       
        if((j+i) > n || k+b*i+d*j-(n-i-j)*e <=0){
            continue;
        }
        if(i*a + j*c < ans){
            ans = i*a + j * c;
        }
    }
    cout << ans << endl;
    return 0;
}