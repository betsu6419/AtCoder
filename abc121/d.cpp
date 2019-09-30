#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a,b;cin >> a >> b;
    ll count = 0;
    ll ans = b;
    if(a==b){
        cout << b << endl;
        return 0;
    }
    if(b-a == 1){
        cout << (a^b) << endl;
        return 0;
    }
    if(a%2 == 0){
        if((b-a+1) %2 == 0){
            count = (b-a+1)/2;
            if(count%2 == 0){
                ans = 0;
            }
            else{
                ans = 1;
            }
        }
        else{
            count = (b-a)/2;
            if(count %2 == 0){
                ans = 0^ans;
            }
            else{
                ans = 1^ans;
            }
        }
    }
    else{
        if((b-a+1)%2 == 0){
            count = (b-a-1)/2;
            if(count%2 == 0){
                ans = a^0^b;
            }
            else{
                ans = a^1^b;
            }
        }
        else{
            count = (b-a)/2;
            if(count %2 == 0){
                
                ans = a^0;
            }
            else{
                ans = a^1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}