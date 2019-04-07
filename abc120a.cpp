#include <iostream>
using namespace std;

int main(){
    int a, b , c;
    cin >> a >> b >> c;
    int ans = 0,i;
    for(i=0;i<c;i++){
    if(b >= a){
        b = b-a;
        ans ++;
    }
    else{
        cout << ans;
        return 0;
    }
    }
    cout << ans;
    return 0;
}