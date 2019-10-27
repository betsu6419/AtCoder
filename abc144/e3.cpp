#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<utility>
#include<tuple>
#include<cmath>

using namespace std;
typedef long long ll;

int main(){
    ll n;cin >> n;
    ll k;cin >> k;
    vector<ll>a(n);
    vector<ll>f(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    sort(f.begin(),f.end());

    ll ub = a[0] * f[n-1]+1;
    ll lb = -1;
    while(ub-lb>1){
        ll m = (ub+lb)/2;
        ll count = 0;
        for(int i=0;i<n;i++){
            if(a[i]*f[i] > m){
                count += (a[i]*f[i] - m + f[i] -1)/f[i];
            }
        }
        if(k < count){
            lb = m;
        }
        else{
            ub = m;
        }
    }
    cout << ub << endl;
    return 0;
}