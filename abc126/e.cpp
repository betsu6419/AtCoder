#include<iostream>
#include<vector>
using namespace std;
struct tree{
    vector<int> par;
    tree(int n):par(n){
        for(int i=0;i<n;i++){
            par[i] = i;
        }
    }
    int root(int x){
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    void unite(int x,int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        par[rx] = ry;
    }
    bool same(int x,int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    tree ut(n);
    for(int i=0;i<m;i++){
        int x,y,z;cin >> x >> y>>z;x--;y--;
        ut.unite(x,y);
    }
    bool par[n];
    for(int i=0;i<n;i++){
        par[i] = false;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(par[ut.root(i)]){

        }
        else{
            ans ++;
            par[ut.root(i)] = true;
        }
    }
    cout << ans << endl;
    return 0;
}