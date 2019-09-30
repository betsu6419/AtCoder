#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int n;cin >> n;
    ll a[n];
    ll ma = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(ma < a[i])ma = a[i];
    }
    ll r = a[0];if(r == ma)r = a[1];
    for(int i=0;i<n;i++){
        if(a[i] !=ma){
            if(min(ma-r,r) <min(ma-a[i],a[i])){
                r = a[i];
            }
        }
    }
    cout << ma <<" "<< r << endl;
}