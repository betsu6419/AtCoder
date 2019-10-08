#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin >> n;
    n = n%30;
    string s= "123456";
    for(int i=0;i<n;i++){
        int j = i%5;
        char tmp;
        tmp = s[j];
        s[j] = s[j+1];
        s[j+1] = tmp;
    }
    cout << s << endl;
    return 0;
}