#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;cin >> s;
    if(s[0] <='z' && s[0] >= 'a'){
        s[0] = 'A' + s[0]-'a';
    }
    for(int i=1;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = 'a' + s[i]-'A';
        }
    }
    cout << s << endl;
    return 0;
}