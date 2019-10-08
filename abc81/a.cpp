#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    for(int i=0;i<3;i++){
        char s;
        cin >> s;
        if(s == '1'){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}