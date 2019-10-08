#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin >> s;
    int i=0;
    bool ans = true;
    while(i<s.size()){
        if(i < s.size()-1 && s[i] == 'c' && s[i+1] == 'h'){
            i += 2;
        }
        else if(s[i] == 'o'||s[i] == 'k' || s[i] == 'u'){
            i ++;
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}