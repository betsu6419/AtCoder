#include<iostream>
using namespace std;
int main(){
    char s[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> s[3-i][3-j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << s[i][j] << " ";
         }
         cout <<s[i][3];
         cout << endl;
    }
    return 0;
}