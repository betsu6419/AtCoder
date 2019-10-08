#include<iostream>
using namespace std;
typedef long long ll;
ll g[305][305];

int main(){
    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)g[i][j] = 0;
            else g[i][j] = (ll)1e10;
        }
    }
    for(int i=0;i<m;i++){
        ll u,v,l;
        cin >> u >> v >> l;
        u--;v--;
        g[u][v] = g[v][u] = l;
    }

    for(int k=1;k<n;k++){
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }
    ll ans = (ll)1e10;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll tmp = g[0][i] + g[i][j] + g[j][0];
            //if(tmp > 1e10)continue;
            ans = min(ans,tmp);
        }
    }
    cout << (ans<1e10?ans:-1) << endl;
    return 0;
}   