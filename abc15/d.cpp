#include<iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    int n,k;
    cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    int dp[n+1][k+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            for(int l =0;l<=k;l++){
                dp[i][l][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int l=0;l<=w;l++){
                if(l-a[i-1] >= 0){
                    dp[i][j][l] = max(dp[i-1][j-1][l-a[i-1]] + b[i-1],dp[i-1][j][l]);
                }
                else{
                    dp[i][j][l] = dp[i-1][j][l];
                }
                //cout << "i=" << i << " j=" << j << " l ="<< l << " dp = " << dp[i][min(j,k)][l] << endl;
            }
        }
    }
    cout << dp[n][k][w] << endl;
    return 0;
}