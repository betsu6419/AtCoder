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

void solve(int i,int layor){
    cout << i << " " << layor << endl;
    if(i >= n){
        return;
    }
    check[i] = true;
    stack<int> before;
    for(int j=0;j<m;j++){
        if(u[j] ==i){
            if(check[v[j]] = true && v[j] !=before.top()){
                circle = true;
            }
            else if(u[j] != before.top()){
            check[v[j]] = true;
            before.push(v[j]);
            }
        }
        if(v[j]==i){
            if(check[u[j]] = true && u[j] != before.top()){
                circle = true;
            }
            else if(u[j]!=before.top()){
                check[u[j]]=true;
                before.push(u[j]);
            }
        }
    }
    while(!before.empty()){
        solve(before.top(),layor+1);
        before.pop();
    }
    if(layor == 0){
        if(circle){
            circle = 0;
        }
        else{
            ans ++;
        }
        solve(i+1,0);
    }
    return;
}

int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> u[i] >> v[i];
    }
    solve(0,0);
    cout << ans << endl;
    return 0;
}