#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}