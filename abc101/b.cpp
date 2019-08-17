#include<iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int digit = 0;
    int n=0;
    for(int i=0;i<s.size();i++){
        n *=10;
        n += s[i]-'0';
        digit += s[i]-'0';
    }
    //cout << n <<endl;
    //cout << digit << endl;
    if(n%digit == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}