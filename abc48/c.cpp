#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

int main(){
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0;i<n-1;i++){
        ll sum = a[i] + a[i+1];
        if(sum <= x){
            continue;
        }
        else{
            if(sum-x <= a[i+1]){
                a[i+1] -= sum-x;
                ans += sum-x;
            }
            else{
                a[i+1] =0;
                a[i] -= sum-x-a[i+1];
                ans += sum-x;
            }
        }
    }
    cout << ans << endl;
    return 0;
}