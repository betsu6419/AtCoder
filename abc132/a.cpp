#include <iostream>
using namespace std;
char s[4];
int main(){
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    if(s[0] == s[1] && s[1] == s[2] && s[2] ==s[3] ){
        cout << "No" << endl;
    }
    else if(
        (s[0] == s[1] && s[2] == s[3])||
        (s[0] == s[2] && s[1] == s[3])||
        (s[0] == s[3] && s[1] == s[2])
    ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}