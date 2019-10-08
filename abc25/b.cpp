#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,a,b;cin >> n >> a >> b;
    int ans = 0;
    for(int i=0;i<n;i++){
        int t;string s;
        cin >> s >> t;
        if(s[0] == 'E'){
            if(t<a){
                ans += a;
            }
            else if(t>b){
                ans += b;
            }
            else{
                ans += t;
            }
        }
        else if(s[0] == 'W'){
            if(t<a){
                ans -= a;
            }
            else if(t>b){
                ans-= b;
            }
            else{
                ans -= t;
            }
        }
    }
    if(ans >0){
        cout << "East" << " " << ans<<endl;
    }
    else if(ans <0){
        cout << "West" << " " << -ans << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}