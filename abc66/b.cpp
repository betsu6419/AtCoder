#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=1;i<s.size()/2;i++){
        if(s.substr(0,(s.size()-2*i)/2) == s.substr((s.size()-2*i)/2,(s.size()-2*i)/2)){
            cout << s.size()-2*i<<endl;
            return 0;
        }
    }
    return 0;
}