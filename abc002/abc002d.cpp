#include <iostream>
#include<vector>

using namespace std;

bool is_friend(int i,int m,int n,vector<vector<bool > > in){
    for(int j=0;j<n;j++){
        for(int k=0;k<j;k++){
            if(i&(1<<j)){
                if(i&(1<<k)){
                    if(in[j][k] == false){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main(){
    int n;cin >> n;
    int m;cin >> m;
    vector<vector<bool > > in(n,vector<bool>(n,false));
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x;
        cin >> y;
        in[x-1][y-1] =true;
        in[y-1][x-1] = true;
    }
    int ans =1;
    for(int i=0;i<(1<<n);i++){
        int tans = 0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                tans ++;
            }
        }
        if(is_friend(i,m,n,in)){
            if(ans < tans){
                //cout << i << endl;
                ans = tans;
            }
        }
    }
    cout << ans << endl;
}