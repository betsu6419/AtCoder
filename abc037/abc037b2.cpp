#include<iostream>
#include<stack>
using namespace std;
int n;
int m;
int u[10000];
int v[10000];
int ans = 0;
bool check[100];
bool circle = false;
int layor = 0;

void solve(int i,int j,int layor){
    cout << i << " " << layor << endl;
    cout << "circle" << circle << endl;
    if(i >= n){
        return;
    }
    if(j >= m){
        return;
    }
    if(check[i] == true){
        return;
    }
    check[i] = true;
    if(u[j]-1 == j){
            if(check[v[j]-1] ==true ){
                circle = true;
            }
            else{
                solve(v[j]-1,j+1,layor+1);
            }
        }
        else if(v[j]-1 == j){
            if(check[u[j]-1] == true){
                circle = true;
            }
            else{
                solve(u[j]-1,j+1,layor+1);
            }
        }
    if(layor == 0){
        if(circle){
            circle = false;
        }
        else{
            cout << "###" << endl;
            ans ++;
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> u[i] >> v[i];
    }
    for(int i=0;i<n;i++){
        solve(i,0,0);
    }
    cout << ans << endl;
    return 0;
}