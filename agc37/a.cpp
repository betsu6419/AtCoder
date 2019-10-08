#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = s.size();
    bool sw = false;
    for(int i=1;i<s.size();i++){
        if(!sw){
            if(s[i]==s[i-1]){
                ans --;
                i+=2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}