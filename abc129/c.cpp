#include<iostream>
using namespace std;
#define MOD 1000000007
int n;
int m;
int a[1000000];
long long dp[1000000];
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    a[m] = 1000000;
    dp[0] = 1;
    int j = 0;
    for(int i=1;i<=n+1;i++){
        dp[i] = 0;
    }
    for(int i=0;i<n;i++){
        //cout << "dp[" << i << "]=" << dp[i] << endl;
        if(i == a[j]){
            j++;continue;
        }
        dp[i+1] = (dp[i+1]+dp[i])%MOD;
        dp[i+2] = (dp[i+2]+dp[i])%MOD;
        
    }
    cout << dp[n] << endl;
    return 0;
}