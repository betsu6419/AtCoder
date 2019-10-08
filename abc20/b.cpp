#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;cin >> a >> b;
    string s = a+b;
    int ans = stoi(s)*2;
    cout << ans << endl;
    return 0;
}