#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    long long way[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            way[i][j] = 2000000000;
            if(i == j){
                way[i][j] = 0;
            }
        }
    }
    for(int i=0;i<m;i++){
        int a,b,c;cin >> a >> b >> c;
        a --;b --;
        if(c <=l){
            way[a][b] = c;
            way[b][a] = c;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                way[j][k] = min(way[j][k],way[j][i]+way[i][k]); 
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(way[i][j]<= l){
                way[i][j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                way[j][k] = min(way[j][k],way[j][i] + way[i][k]);
            }
        }
    }
    int q;cin >> q;
    for(int i=0;i<q;i++){
        int s,t;cin >> s >> t;
        s--;t--;
        if(way[s][t] < 2000000000){
            cout << way[s][t]-1 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}