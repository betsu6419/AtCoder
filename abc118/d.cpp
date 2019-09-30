#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    bool a[10];
    for(int i=0;i<10;i++){
        a[i] = false;
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin >> tmp;
        a[tmp] = true;
    }
    int b[10] = {1000,2,5,5,4,5,6,3,7,6};
    int dp[n+1];
    for(int i=0;i<n+1;i++){
        dp[i] = -(int)1e9;
    }
    dp[0] = 0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=9;j++){
            if(a[j]){
                if(i-b[j] >= 0){
                    dp[i] = max(dp[i-b[j]] + 1,dp[i]);
                }
            }
        }
        //cout <<i << " " <<  dp[i] << endl;
    }
    int max_digit = dp[n];
    string ans = "";
    int now_digit = max_digit;
    int last = n;
    //cout << max_digit << endl;
    while(now_digit > 0){
        for(int i = 9;i >=1;i--){
            if(last - b[i] >= 0){    
                if(a[i] && dp[last-b[i]] == now_digit-1){
                    now_digit --;
                    ans += to_string(i);
                    last -= b[i];
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}