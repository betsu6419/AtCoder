#include<iostream>
using namespace std;

int main(){
    char s[4];
    cin >> s;
    int ans = 0;
    for(int i=0;i<4;i++){
        if(s[i] == '+'){
            ans ++;
        }
        else{
            ans --;
        }
    }
    cout << ans << endl;
    return 0;
}