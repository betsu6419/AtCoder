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
    while(k != 0 && a.top() != 0){
        ll tmp = a.top();
        a.pop();
        ll tmp2 = tmp - min(k,tmp);
        k -= min(k,tmp);
        a.push(tmp2);
    }
    ll ans = 0; 
    for(int i=0;i<n;i++){
        if((-1)*a.top()*f.top() > ans){
            ans = (-1)*a.top()*f.top();
        }
        a.pop();f.pop();
    }   
    cout << ans << endl;
    return 0;
}