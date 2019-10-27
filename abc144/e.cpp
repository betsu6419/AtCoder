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
    priority_queue<ll> a;
    priority_queue<ll> f;
    for(int i=0;i<n;i++){
        ll tmp;cin >> tmp;
        a.push(tmp);
    }
    for(int i=0;i<n;i++){
        ll tmp;cin >> tmp;
        f.push((-1)*tmp);
    }
    priority_queue < tuple<ll,ll,ll> > q;
    for(int i=0;i<n;i++){
        ll a_f = a.top();
        a.pop();
        ll f_f = f.top();
        f.pop();
        f_f *= -1;
        q.push(make_tuple(a_f*f_f,f_f,a_f));
    }
    #if TEST1
        while(!q.empty()){
            cout << get<0>(q.top()) <<" " <<  get<1>(q.top()) << " "<<get<2>(q.top()) << endl;
            q.pop() ;
        }
    #endif
    while(k != 0 && get<0>(q.top())!=0){
        tuple<ll,ll,ll> now = q.top();
        q.pop();
        tuple<ll,ll,ll> next = q.top();
        ll i = min((ll)(get<0>(now)-get<0>(next)+get<1>(now))/get<1>(now),min(k,get<2>(now)));
        ll ins_2 = get<2>(now) - i;
        ll ins_1 = get<1>(now);
        ll ins_0 = ins_2*ins_1;
        k -= i;
        q.push(make_tuple(ins_0,ins_1,ins_2));
    }
    cout << get<0>(q.top()) << endl;
    return 0;
}