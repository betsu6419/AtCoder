#include<iostream>
#include<string>
using namespace std;

int main(){
    string s[12];
    int ans = 0;
    for(int i=0;i<12;i++){
        cin >> s[i];
        bool sw = false;
        for(int j=0;j<s[i].size();j++){
            if(s[i][j] == 'r'){
                sw = true;
            }
        }
        if(sw){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
    
}