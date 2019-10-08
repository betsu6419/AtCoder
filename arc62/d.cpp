#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;cin >> s;
    int ans = 0;
    int g = 0;
    int p  =0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'g'){
            if(g-p >0 ){
                ans ++;
                p++;
            }
            else{
                g ++;
            }
        }
        else{
            if(g-p > 0){
                p++;
            }
            else{
                g++;
                ans --;
            }
        }
    }
    cout << ans << endl;
    return 0;
}