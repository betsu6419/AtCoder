#include<iostream>
#include<vector>
#include<cmath>
#include <bitset>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    int dp[m+1][5000];
    for(int i=0;i<=m;i++){
        dp[i][0] = 0;
        for(int j=1;j<5000;j++){
            dp[i][j] = 1000000007;
        }
    }
    int d[m];
    for(int i=0;i<m;i++){
        d[i] = 0;
    }
    int a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
        int b;cin >> b;
        for(int j=0;j<b;j++){
            int c;cin >> c;
            d[i] += pow(2,c-1);
        }
    }
    #if D
    for(int i=0;i<m;i++){
        cout <<i << " " <<  bitset<sizeof(int)*CHAR_BIT>(d[i]) << endl;
        //cout << bitset<sizeof(int)*CHAR_BIT>(0|d[i]) << endl;
    }
    
    #endif
    int ma = pow(2,n)-1;
    for(int i=1;i<=m;i++){

        for(int j=0;j<=ma;j++){
            dp[i][j] = dp[i-1][j];
        }
        for(int j=0;j<=ma;j++){
            dp[i][j|d[i-1]] = min(dp[i][j|d[i-1]],min(dp[i-1][j|d[i-1]],dp[i-1][j] + a[i-1]));
        }

        #if D
        for(int j=0;j<=ma;j++){
            cout << i << " " <<bitset<sizeof(int)*CHAR_BIT>(j) << " " << dp[i][j] << endl;
        }
        #endif
    }
    if(dp[m][ma] == 1000000007){
        cout << -1 << endl;
    }
    else{
        cout << dp[m][ma] << endl;
    }
    return 0;
}