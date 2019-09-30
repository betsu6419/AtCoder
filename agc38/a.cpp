#include<iostream>
using namespace std;

int main(){
    int h,w,a,b;cin >> h >> w >> a >> b;
    int dp[h][w][2];
    for(int i =0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k = 0;k<2;k++){
                dp[i][j][k] = 0;
            }
        }
    }
    int ans[h][w];
    dp[0][0][0] = 1;
    dp[0][0][1] = 1;
    ans[0][0] = 1;
    if(a == 0){
        a = w;
    }    
    if(b == 0){
        b = h;
    }
    for(int i=1;i<w;i++){
        if(dp[0][i-1][0]< a ){
            ans[0][i] = 1;
            dp[0][i][0] = dp[0][i-1][0]+1;
            dp[0][i][1] = 1;
        }
        else{
            ans[0][i] = 0;
            dp[0][i][0] = dp[0][i-1][0];
            dp[0][i][1] = 0;
        }
    }
    for(int i=1;i<h;i++){
        if(dp[i][0][1]< b ){
            ans[i][0] = 1;
            dp[i][0][0] = 1;
            dp[i][0][1] = dp[i-1][0][1]+1;
        }
        else{
            ans[0][i] = 0;
            dp[i][0][0] = 0;
            dp[i][0][1] = dp[0][i-1][1]+1;
        }
    }
    for(int i=1;i<h;i++){
        
        for(int j=1;j<w;j++){

        }
    }
}