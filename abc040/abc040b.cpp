#include <iostream>

using namespace std;

int main(){
    int n;cin >> n;
    int ans = 10000000;
    int sub,tans;
    for(int i=1;i<400;i++){
        for(int j=1;j<=i;j++){
            sub = n - i*j;
            if(sub<0){
                break;
            }
            tans = (i-j) + sub;
            if(tans < ans){
                ans = tans;
            } 
        }
    }
    cout << ans << endl;
    return 0;

}