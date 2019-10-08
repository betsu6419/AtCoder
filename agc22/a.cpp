#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin >> s;
    if(s == "zyxwvutsrqponmlkjihgfedcba"){
        cout << -1 << endl;return 0;
    }
    string ans = "";
    bool a[26];
    for(int i=0;i<26;i++){
        a[i] = false;
    }
    for(int i=0;i<s.size();i++){
            a[s[i]-'a'] = true;
            ans += s[i];
    }
    if(s.size() != 26){
       
        for(int i=0;i<26;i++){
            if(!a[i]){
                ans += (char)('a'+i);
               break;
            }
        }
    }
    else{
        for(int i=s.size()-1;i>=0;i--){
            a[s[i]-'a'] = false;
            if(s[i-1] < s[i]){
                int tmp;
                for(int j=s[i-1]-'a';j<26;j++){
                    if(!a[j]){
                        tmp =j;
                        break;
                    }
                }
                ans = s.substr(0,i-1) +(char)('a'+tmp);
                break;
            }
        }
    }
     cout << ans << endl;
                return 0;
}