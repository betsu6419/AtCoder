#include <iostream>
#include<string>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[(i+j)%s.size()]!=t[j]){
                break;
            }
            if(j == s.size()-1){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}