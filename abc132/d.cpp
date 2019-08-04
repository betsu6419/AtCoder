#include <iostream>
using namespace std;
long long ans[10000];
int n;
int k;
long long dp[3000][3000];
int main(){
    cin >> n;
    cin >> k;
   for(int i=0;i<2001;i++){
       dp[i][0] = 1;
       dp[i][i] = 1;
       for(int j=1;j<i;j++){
           dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%1000000007;
       }
   }
    for(int i=1;i<=k;i++){
        cout << (dp[n-k+1][i]*dp[k-1][i-1])%1000000007 << endl;
    }
    return 0;
}