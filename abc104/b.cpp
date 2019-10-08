#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0] !='A'){
        cout << "WA"<<endl;
        return 0;
    }
    int count = 0;
    int ic;
    for(int i=2;i<s.size()-1;i++){
        if(s[i] == 'C'){
            count++;
            ic = i;
        }
    }
    if(count != 1){
        cout << "WA" << endl;
        return 0;
    }
    for(int i=1;i<s.size();i++){
        if(i == ic){
            continue;
        }
        if(s[i] < 'a' || s[i] > 'z'){
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
    return 0;
}