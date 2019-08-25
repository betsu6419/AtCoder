#include<iostream>
#include<vector>
#include<queue>
#include<array>
using namespace std;
int graph[200][200];
int n,s,g;
#define MOD 1000000007


int main(){

int count[200];
    cin >> n;
    cin >> s;s--;
    cin >> g;g--;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i ==j)graph[i][j] = 0;
            else graph[i][j] = 1e9;
        }
    }
    int m;cin >> m;
    for(int i=0;i<m;i++){
        int a,b;cin >> a >> b;
        a--;b--;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j] = min(graph[i][j],graph[i][k] + graph[k][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        count[i] = 0;
    }
    queue<int> q;
    bool visited[n];
    fill(visited,visited+n,false);
    visited[s] = true;
    q.push(s);
    count[s] = 1;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(now == g)break;
        for(int i=0;i<n;i++){
            if(graph[now][i] == 1 && graph[s][i]-graph[s][now] == 1){
                count[i] = (count[i] + count[now])%MOD;
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
    cout << count[g] << endl;
}