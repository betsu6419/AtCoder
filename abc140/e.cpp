#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
int main(){
    int n;cin >> n;
    ll p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }    
    ll pos[n+1];
    for(int i=0;i<n;i++){
        pos[p[i]] = i;
    }
    multiset<ll> s;
    s.emplace(-1);s.emplace(-1);
    s.emplace(n);s.emplace(n);
    ll res = 0;
    for(int a = n;a >= 1;a--){
        int i = pos[a];
        auto r = s.upper_bound(i),l = r;l--;
        ll l2 = *l;l--;ll l1  =*l;
        ll r1  =*r;r++;ll r2  =*r;
        ll x = (l2-l1)*(r1-i) + (i-l2)*(r2-r1);
        res += x*a;
        s.emplace(i);
    }   
    cout << res << endl;
    return 0;
}