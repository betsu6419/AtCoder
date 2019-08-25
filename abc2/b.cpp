#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;cin >> s;
    string t = "aiueo";
    string ans = "";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i] == t[j]){
                break;
            }
            if(j == t.size()-1){
                ans += s[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}