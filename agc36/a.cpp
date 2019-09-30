#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll s;cin >> s;
    ll x1,y1,x2,y2,x3,y3;
    x1 = 0;y1 = 0;
    if(s <= 1e9){
        x2 = 0;y2 = 1;
        x3 = s;y3 = 0;
    }
    else if(s == (ll)1e18){
        x2 = (ll)1e9;y2 = 0;
        x3 = 0;y3 = (ll)1e9;
    }
    else{
        x2 = 1e9;y2 = 1;
        x3 = (ll)1e9 - s%(ll)(1e9);y3 = s/1e9+1;
    }
    cout << x1 <<" " <<  y1 <<" "<< x2 <<" "<< y2 <<" "<< x3 <<" " << y3 << endl;
    return 0; 
}