#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ans = true;
    for(int i=0;i<s.size();i++){
        if(i%2 == 0){
            if(s[i] == 'L'){
                ans = false;
            }
        }
        else{
            if(s[i] == 'R'){
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