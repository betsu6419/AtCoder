#include<iostream>
using namespace std;
int main(){
    long long x,y;
    cin >> x >> y;
    int i=1;
    int ans = 0;
    while(1){
        if(x <= y){
            ans ++ ;
            x = x*2;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
    return 0;
}