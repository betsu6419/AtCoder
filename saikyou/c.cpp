#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin >> n;
    stirng s;cin >> s;
    ll count = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] != s[i+1]){
            count ++;
        }
    }
}