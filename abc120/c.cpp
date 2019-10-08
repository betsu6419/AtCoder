#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n_1 = 0;
    int n_0 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '1'){
            n_1 ++;
        }
        else{
            n_0 ++;
        }
    }
    cout << min(n_1,n_0)*2 << endl;
    return 0;
}