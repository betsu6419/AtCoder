#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool sw = true;
    for(int i=0;i<3;i++){
        if(s[i] != s[i+1]){
            break;
        }
        if(i == 2){
            sw = false;
        }
    }
    if(sw){
        cout << "DIFFERENT" << endl;
    }
    else{
        cout << "SAME" << endl;
    }
    return 0;

}