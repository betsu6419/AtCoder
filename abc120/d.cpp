#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
class UnionFind{
public:
    vector<ll> p;
    vector<ll> s;
    UnionFind(ll sz_):p(sz_),s(sz_,1LL){
        for(ll i=0;i<sz_;i++)p[i] = i;
    }
    void init(ll sz_){
        p.resize(sz_);
        s.assign(sz_,1LL);
        for(ll i=0;i<sz_;i++)p[i] = i;
    }

    ll root(ll x){
        while(p[x] != x){
            x = p[x] = p[p[x]];
        }
        return x;
    }

    bool merge(ll x,ll y){
        x = root(x);
        y =root(y);
        if(x ==y)return false;
        if(s[x] < s[y])swap(x,y);
        s[x] += s[y];
        p[y] = x;
        return true;
    }

    bool same(ll x,ll y){
        return root(x) == root(y);
    }

    ll size(ll x){
        return s[root(x)];
    }
};

int main(){
    ll n,m;cin >> n >> m;
    ll a[m],b[m];
    for(int i=0;i<m;i++){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
    ll ans[m];
    UnionFind tree(n);
    ans[m-1] = (n*(n-1))/2;
    for(int i=m-1;i>0;i--){
        if(tree.same(a[i],b[i])){
            ans[i-1] = ans[i];
        }
        else if(ans[i] - tree.size(a[i])*tree.size(b[i]) <= 0){
            ans[i-1] = 0;
        }
        else{
            ans[i-1] = ans[i] - tree.size(a[i])*tree.size(b[i]);
        }
        tree.merge(a[i],b[i]);
    }

    for(int i=0;i<m;i++){
        cout << ans[i] << endl;
    }
    return 0;
}