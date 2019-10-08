#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    string text = "atcoder";
    bool ans = true;
    for(int i=0;i<s.size();i++){
        if(s[i] == '@' || t[i] == '@'){
            if(s[i] == t[i]){
                continue;
            }
            for(int j=0;j<text.size();j++){
                if(s[i] + t[i] - text[j] == '@'){
                    break;
                }
                if(text.size()-1 == j){
                    ans = false;
                }
            }   
        }
        else{
            if(s[i] != t[i]){
                ans = false;
                break;
            }
        }
    }
    if(ans){
        cout << "You can win" << endl;
    }
    else{
        cout << "You will lose" << endl;
    }
    return 0;
}