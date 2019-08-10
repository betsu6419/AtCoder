#include <iostream>
using namespace std;

int dfs(long long a,int n,int n_3,int n_5,int n_7){
    if(a > n){
        return 0;
    }
    else if(n_3 >0 && n_5 >0 && n_7 > 0){
        return dfs(a*10+3,n,n_3+1,n_5,n_7) + dfs(a*10+5,n,n_3,n_5+1,n_7) + dfs(a*10+7,n,n_3,n_5,n_7+1) + 1;
    }
    else{
        return dfs(a*10+3,n,n_3+1,n_5,n_7) + dfs(a*10+5,n,n_3,n_5+1,n_7) + dfs(a*10+7,n,n_3,n_5,n_7+1);
    }
}

int main(){
    int n;
    cin >> n;
    int ans = dfs(0,n,0,0,0);
    cout << ans << endl;
}