#include <iostream>
using namespace std;
int n,m;
bool M[110][110];
bool seen[110];
bool tree;

void dfs(int v,int prev){
    seen[v] = true;
    for(int i=0;i<n;i++){
        if(M[v][i]&&i!=prev){
            if(seen[i])tree = false;
            else dfs(i,v);
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        M[a][b] = M[b][a] = true;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(!seen[i]){
            tree = true;
            dfs(i,-1);
            if(tree)ans++;
        }     
    }
    cout << ans << endl;
    return 0;
}