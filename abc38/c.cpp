#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin >> n;
    ll a[n+1];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] = -1;
    ll ans = n;
    ll count = 1;
    ll b[n+1];
    b[0] = 0;;
    for(int i=1;i<=n;i++){
        b[i] = b[i-1]+(i-1); 
    }
    for(int i=0;i<n;i++){
        if(a[i] < a[i+1]){
            count ++;
        }
        else{
            if(count > 1){
                ans += b[count];
                count = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}