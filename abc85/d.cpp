#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin >> n;
    ll h;cin >> h;
    priority_queue <ll> a;
    priority_queue <ll> b;
    for(int i=0;i<n;i++){
        ll tmpa,tmpb;
        cin >> tmpa;cin >> tmpb;
        a.push(tmpa);
        b.push(tmpb);
    }
    ll ans = 0;
    while(h > 0){
        if((b.empty()) || a.top() > b.top()){
            ans += (h-1+a.top())/a.top();
            h = 0;
        }
        else{
            ans ++;
            h -= b.top();
            b.pop();
        }
    }
    cout << ans << endl;
    return 0;
}