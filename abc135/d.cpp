#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
string s;
long long dp[100001][13];
int surplus[100001];
int main(){
    cin >> s;
    reverse(s.begin(),s.end());
    for(int j=0;j<=s.size();j++){
        for(int i=0;i<13;i++){
            dp[j][i] = 0;
        }
    }
    surplus[0] = 1;
    if(s[0] == '?'){
        for(int i=0;i<10;i++){
            dp[0][i] = 1;
        }
    }
    else{
        string s2(1,'a');
        s2[0] = s[0];
        const char *line = s2.c_str();
        int tmp = atoi(line);
        //cout << "s[" << "0" << "]" << "=" << tmp << endl;
        dp[0][tmp] = 1;
    }
    for(int i=1;i<s.size();i++){
        surplus[i] = (surplus[i-1]*10)%13;
        //cout << "surplus" << "[" << i << "]=" << surplus[i] << endl;
        if(s[i] == '?'){
            for(int k=0;k<10;k++){
                for(int j=0;j<13;j++){
                    dp[i][(j+surplus[i]*k)%13] = (dp[i][(j+surplus[i]*k)%13]+dp[i-1][j])%(1000000007);
                }
            }
        }
        else{
            string s2(1,'a');
                s2[0] = s[i];
                const char *line = s2.c_str();
                int tmp = atoi(line);
                //cout << "s[" << i << "]" << "=" << tmp << endl;
            
            for(int j=0;j<13;j++){
                dp[i][(j+surplus[i]*tmp)%13] = (dp[i][(j+surplus[i]*tmp)%13]+dp[i-1][j])%(1000000007); 
            }
        }
    }
    int ans = dp[s.size()-1][5];
    cout << ans << endl;
    return 0;
}