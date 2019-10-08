#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool ans = true;
    if(s.size() !=(a+b+1)){
        ans = false;
    }
    for(int i=0;i<s.size();i++){
        if(i<a || a<i){
            if(s[i]<'0'||s[i]>'9'){
                ans = false;
            }
        }
        else if(i == a){
            if(s[i] != '-'){
                ans = false;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;

    }
    else{
        cout << "No" << endl;
    }
    return 0;
}