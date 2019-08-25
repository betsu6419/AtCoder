#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin >> n;
    string s;cin >> s;
    string t = "b";
    int i = 1;
    while(s.size()>t.size()){
        if(i%3 == 1){
            t = 'a' + t + 'c';
        }
        else if(i%3 == 2){
            t = 'c' + t + 'a';
        }
        else{
            t = 'b' + t + 'b';
        }
        i++;
    }
    if(s==t){
        cout << i-1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}