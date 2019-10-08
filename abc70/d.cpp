#include<iostream>
#include<vector>
#include<utility>
using namespace std; 
typedef long long ll;
typedef pair<int,int> T;
vector<T> v[200000];
ll ans[200000];
void dfs(int from,int now,ll cost){
    ans[now] = cost;
    //cout << from << " " << now << " " << cost << endl;
    for(int i=0;i<v[now].size();i++){
        if(v[now][i].first == from)continue;
        ll cost2 = cost + (ll)v[now][i].second;
        dfs(now,v[now][i].first,cost2);
    }
}

int main(){
    int n;cin >> n;
    for(int i=0;i<n-1;i++){
        int a,b,c;cin >> a >>b >> c;
        a--;b--;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }
    //cout << "a" << endl;
    int q,k;cin >> q >> k;
    k --;
    dfs(k,k,0);
    for(int i=0;i<q;i++){
        int x,y;cin >> x >> y;x--;y--;
        cout << ans[x] + ans[y] << endl;
    }
    return 0;
}