#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s;cin >> s;
    string t;cin >>t ;
    int ans = 0;
    for(int i=0;i<3;i++){
        if(s[i] == t[i]){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}