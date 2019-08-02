#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
    cin >> s;
    int w = 0;
    int l= 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'o'){
            w += 1;
        }
        else{
            l += 1;
        }
    }
    if((w + (15-s.size())) >=8){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}