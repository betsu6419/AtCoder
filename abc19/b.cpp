#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    s = s+"!";
    int count = 0;
    string t = "";
    for(int i = 0;i<s.size()-1;i++){
        count ++;
        if(s[i] != s[i+1]){
            t += s[i] + to_string(count);
            count =0;
        }
    }
    cout << t << endl;
    return 0;
}