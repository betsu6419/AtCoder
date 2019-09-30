#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    int count = 0;
    for(int i=0;i<s.size();i++){

        if(s[i] == 'W'){
            ans += (i-count);
            count ++;
        }
    }
    cout << ans << endl;
    return 0;
}