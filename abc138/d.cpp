#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
typedef long long ll;
using namespace std;

int main(){
    ll n,q;
    cin >> n >> q;
    vector<ll> in[n];
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = 0;
    }
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin >> a >> b;
        a--;b--;
        in[a].push_back(b);
        in[b].push_back(a); 
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<in[i].size();j++){
            cout << in[i][j] << " ";
        }
        cout << endl;
    }*/

    for(int i=0;i<q;i++){
        ll p,x;
        cin >> p >> x;
        p--;
        ans[p] += x;
        //cout << "a" << endl;
    }

    queue <ll> queue;
    queue.push(0);
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    while(!queue.empty()){
        ll now = queue.front();
        //cout << "now=" <<now << endl; 
        queue.pop();
        visited[now] = true;
        for(int i=0;i<in[now].size();i++){
            //cout << in[now][i] << endl;
            if(visited[in[now][i]]){
                continue;
            }
            queue.push(in[now][i]);
            ans[in[now][i]] += ans[now];
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}