#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<9;i++){
        char s;
        cin >> s;
        if(i==0||i==4||i==8){
            cout << s;
        }
    }
    cout << endl;
    return 0;
}