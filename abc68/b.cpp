#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans ;
    for(int i=0;i<n;i++){
        if(pow(2,i) > n){
            ans = pow(2,i-1);
            break;
        }
    }
    if(ans ==0){
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}