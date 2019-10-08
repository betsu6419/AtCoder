#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(count(s.begin(),s.end(),'a') == 1&&count(s.begin(),s.end(),'b') == 1&&count(s.begin(),s.end(),'c') == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}