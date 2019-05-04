#include <iostream>
using namespace std;

int main(){
    int n;cin >> n;
    char s[n];cin >> s;
    int w=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i] == '.'){
            w ++;
        }
    }
    int ans = w;
    int tans;
    for(int i =0;i<n;i++){
        if(s[i] == '#'){
            b ++;
        }
        else{
            w --;
        }
        tans = w + b;
        if(tans < ans){
            ans = tans;
        }
    }
    cout << ans << endl;
}