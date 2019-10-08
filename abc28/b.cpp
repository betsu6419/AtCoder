#include<iostream>
#include<string>
using namespace std;

int main(){
    string s ;cin >> s;
    int num[6];
    for(int i=0;i<6;i++){
        num[i] = 0;
    }
    for(int i=0;i<s.size();i++){
        num[s[i]-'A'] ++;
    }
    for(int i=0;i<5;i++){
        cout << num[i] << " ";

    }
    cout << num[5] << endl;
    return 0;
}