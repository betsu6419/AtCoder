#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n,k;cin >> n >> k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 0){
            cout << n << endl;
            return 0;
        }
    }
    ll tmp = a[0];
    ll ans = 0;
    ll left = 0;ll right = 0;
    while(1){
        if(tmp>k){
            if(left == right){
                right ++;
                if(right == n){
                    break;
                }
                tmp *= a[right];
            }
            tmp /=a[left];
            left ++; 
        }
        else if(tmp <=k){
            if(ans < right - left + 1){
                ans = right - left +1;
            }
            right ++;
            if(right == n){
                break;
            }
            tmp *= a[right];
        }
    }
    cout << ans << endl;
    return 0;
}