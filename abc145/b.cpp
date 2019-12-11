#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    if(n%2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    for(int i=0;i<n/2;i++){
        if(s[i] != s[i+n/2]){
            cout << "No" << endl;
            return 0;
        }
        if(i == n/2-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
}