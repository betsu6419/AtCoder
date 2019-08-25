#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    ll r,c,k,n;
    cin >> r >> c >> k >> n;
    vector<ll> a(n);
    vector<ll>b(n);
    int d[n];
    int e[n];
    for(ll i=0;i<n;i++){
        cin >> a[i] >> b[i];
        d[i]=a[i];
        e[i] = b[i];
    }
    vector<ll> x;
    vector<ll> y;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=1;i<=r;i++){
        x.push_back(upper_bound(a.begin(),a.end(),i)-lower_bound(a.begin(),a.end(),i));
    }
    for(ll i=1;i<=c;i++){
        y.push_back(upper_bound(b.begin(),b.end(),i)-lower_bound(b.begin(),b.end(),i));
    }
    /*
    for(int i=0;i<x.size();i++){
        cout << x[i] << " ";
    }
    cout << endl;
    
    for(int i=0;i<y.size();i++){
        cout << y[i] << " ";
    }
    cout << endl;*/
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(x[d[i]-1] + y[e[i]-1] == k){
            ans --;
        }
        if(x[d[i]-1] + y[e[i]-1] == k+1){
            ans ++;
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    for(int i=0;i<=k;i++){
        ll tmpx = upper_bound(x.begin(),x.end(),i)-lower_bound(x.begin(),x.end(),i);
        ll tmpy = upper_bound(y.begin(),y.end(),k-i) - lower_bound(y.begin(),y.end(),k-i);
        ans += tmpx*tmpy;
    }
    cout << ans << endl;
    return 0;
}