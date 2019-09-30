#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;

int main(){
    ll a,b,q;cin >> a >> b >> q;
    vector<ll> s(a),t(b),x(q);
    for(int i=0;i<a;i++){
        cin >> s[i];
    }
    s.push_back((ll)-1e12);
    s.push_back((ll)1e12);
    sort(s.begin(),s.end());
    for(int i=0;i<b;i++){
        cin >> t[i];
    }
    t.push_back((ll)-1e12);
    t.push_back((ll)1e12);
    sort(t.begin(),t.end());
    for(int i=0;i<q;i++){
        cin >> x[i];
    }
    for(int i=0;i<q;i++){
        ll tmps1,tmps2,tmpt1,tmpt2;
        if(upper_bound(s.begin(),s.end(),x[i])-lower_bound(s.begin(),s.end(),x[i])>0){
            tmps1 = 0;
            tmps2 = 0;
        }
        else{
            tmps1 = abs(s[upper_bound(s.begin(),s.end(),x[i])-s.begin()-1]-x[i]);
            tmps2 = abs(s[upper_bound(s.begin(),s.end(),x[i])-s.begin()]-x[i]);
            
        }

        if(upper_bound(t.begin(),t.end(),x[i])-lower_bound(t.begin(),t.end(),x[i])>0){
            tmpt1 = 0;
            tmpt2 = 0;
        }
        else{
            tmpt1 = abs(t[upper_bound(t.begin(),t.end(),x[i])-t.begin()-1]-x[i]);
            tmpt2 = abs(t[upper_bound(t.begin(),t.end(),x[i])-t.begin()]-x[i]);
        }
        ll ans = min(max(tmps1,tmpt1),
        min(max(tmps2,tmpt2),
        min(2*min(tmps1,tmpt2)+max(tmps1,tmpt2),
        2*min(tmps2,tmpt1)+max(tmps2,tmpt1))));
        //cout << tmps1<< " " << tmps2 << " " << tmpt1 << " " << tmpt2 << " ";
        cout << ans << endl;
    }
    return 0;
}