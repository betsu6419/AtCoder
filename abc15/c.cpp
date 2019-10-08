#include<iostream>
using namespace std;
int t[1000][1000];
int n,k;
bool dfs(int now,int tmp){
    if(now == n){
        return (tmp == 0);
    }
    else{
        for(int i=0;i<k;i++){
            if(dfs(now+1,tmp^t[now][i])){
                return true;
            }
        }
        return false;
    }
}

int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin >> t[i][j];
        }
    }
    if(dfs(0,0)){
        cout << "Found" << endl;
    }
    else{
        cout << "Nothing" << endl;
    }
    return 0;
   
}