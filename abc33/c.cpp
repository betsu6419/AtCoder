#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    bool sw = true;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0' ){
            sw = false;
        }
        else if(s[i] == '+'){
            if(sw){
                ans ++;
             }
                sw = true;
            
        }
    }
    if(sw){
        ans ++;
    }
    cout << ans << endl;
    return 0;
}