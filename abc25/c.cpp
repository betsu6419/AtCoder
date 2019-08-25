#include<iostream>
using namespace std;
int b[2][3];
int c[3][2];

int f[3][3] = {0};

int mc = 0;
int mn = 0;

int dfs(int cnt){
    int ma = 0;
    if(cnt == 9){
        int point = 0;
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                if(f[i][j] == f[i+1][j]){
                    point += b[i][j];
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                if(f[i][j] == f[i][j+1]){
                    point += c[i][j];
                }
            }
        }
        return point;
    }

    if(cnt %2 == 0){
        int ma = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(f[i][j] == 0){
                    f[i][j] = 1;
                    ma = max(ma,dfs(cnt+1));
                    f[i][j] = 0;
                }
            }
        }
        return ma;
    }
    else{
        int mi = 1e9;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(f[i][j] == 0){
                    f[i][j] = 2;
                    mi = min(mi,dfs(cnt+1));
                    f[i][j] = 0;
                }
            }
        }
        return mi;
    }
}

int main(){
    int total = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> b[i][j];
            total += b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin >> c[i][j];
            total += c[i][j];
        }
    }
    int ans = dfs(0);
    cout << ans << endl;
    cout << total-ans<<endl;
    return 0;
}