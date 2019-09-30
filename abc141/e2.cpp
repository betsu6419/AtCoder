#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;cin >> n;
    string s;
    cin >> s;
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = 0;
        }
    }
    int res = 0;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(s[i] == s[j]){
                dp[i][j] = max(dp[i][j],dp[i+1][j+1] + 1);
            }
            res = max(res,min(dp[i][j],j-i));
            //cout << "i=" << i << "j=" << j << "dp[" << i << "][" << j << "]=" << dp[i][j] << endl;
        }
    }
    cout << res << endl;
    return 0;
}