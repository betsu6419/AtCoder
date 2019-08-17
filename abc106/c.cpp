#include <iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    string s;
    ll k;
    cin >> s >> k;
    int first_i=s.size();
    int first_num = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]!='1'){
            first_i = i;
            first_num = s[i]-'0';
            break;
        }
    }
    if(k < first_i+1){
        cout << 1 << endl;
    }
    else{
        cout << first_num << endl;
    }
    return 0;
}