#include<iostream>
#include<cstring>
using namespace std;
bool dp[200][20000];
int main(){
    int n;cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    memset(dp,0,sizeof(dp));
    dp[0][0] = true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j < a[i-1]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];
            }
        }
    }

    int ans = 0;
    for(int i=0;i<=sum;i++){
        if(dp[n][i]){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}