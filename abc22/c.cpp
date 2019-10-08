#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int m;
int n;
int g[400][400];
vector <int> path[400];
int dfs(int,int);


int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g[i][j] = -1;
        }
    }
    for(int i=0;i<m;i++){
        int u,v,l;cin >> u >> v >> l;
        u--;v--;
        g[u][v] = l;
        g[v][u] = l;
        path[u].push_back(v);
        path[v].push_back(u);
    }
    int ans = dfs(0,0);
    if(ans == 1e9){
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}

int dfs(int now,int cost){
    if(now == 0&&cost !=0){
        return cost;
    }
    /*
    for(int i=0;i<n;i++){
        if(g[now][i] >0){
            break;
        }
        if(i == n-1){
            return -1;
        }
    }*/
    int mi = 1e9;
    for(int i=0;i<path[now].size();i++){
        int tmp = path[now][i];
        if(g[now][tmp]>0){
            int tmp2 =g[now][tmp];
            g[now][tmp] = -1;
            g[tmp][now] = -1;
            mi = min(mi,dfs(tmp,cost+tmp2));
            g[now][tmp] = tmp2;
            g[tmp][now] = tmp2;
        }
    }
    return mi;
}