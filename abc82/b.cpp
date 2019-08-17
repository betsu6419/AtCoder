#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    reverse(t.begin(),t.end());
    bool ans; 
    if(s[0] == s[s.size()-1] && t[0] == t[t.size()-1]){
        ans = (s.size()<t.size());
    }
    else{
        ans = s[0] < t[0];
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
  
}