#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    char s[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> s[j][n-i-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}