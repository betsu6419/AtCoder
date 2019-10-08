#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s;cin >> s;
    int t; cin >> t;
    int u=0,d=0,l=0,r=0,x=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'U'){
            u ++;
        }
        else if(s[i] == 'D'){
            d++;
        }
        else if(s[i] == 'L'){
            l ++;
        }
        else if(s[i] == 'R'){
            r ++;
        }
        else{
            x ++;
        }
    }

    if(t == 1){
        cout << abs(u-d) + abs(l-r) + x << endl;
    }
    else{
        if(abs(u-d) + abs(l-r) -x >=0){
            cout << abs(u-d) + abs(l-r) -x << endl;
        }
        else{
            cout << abs(abs(u-d) + abs(l-r) -x)%2 << endl;
        }
    }
    return 0;
}