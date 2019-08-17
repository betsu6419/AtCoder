#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,m;
bool g[50][50];
bool visited[50];


void dfs(int i){
    visited[i] = true;
    for(int j = 0;j<n;j++){
        if(!g[i][j]){
            continue;
        }
        if(visited[j]){
            continue;
        }
        dfs(j);
    }
}

int main(){
    cin >> n >> m;
    int  a[m],b[m];
    for(int i=0;i<m;i++){
        cin >> a[i] >> b[i];
        a[i]--;b[i]--;
        g[a[i]][b[i]] = true;
        g[b[i]][a[i]] =true;
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        g[a[i]][b[i]] = g[b[i]][a[i]] = false;
        for(int j=0;j<n;j++){
            visited[j] = false;
        }
        dfs(0);

        bool bridge = false;
        for(int j=0;j<n;j++){
            if(!visited[j]){
                bridge = true;
            }
        }
        if(bridge){
            ans ++;
        }
        g[a[i]][b[i]] = g[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}