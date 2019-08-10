#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    string s;
    cin >> s;
    int min = 2000000000;
    for(int i=0;i<s.size()-2;i++){
        int tmp = (s[i]-'0')*100 + (s[i+1]-'0')*10+(s[i+2]-'0');
        if(abs(tmp-753) < min){
            min = abs(tmp-753);
        }
    }
    cout << min << endl;
    return 0;
}