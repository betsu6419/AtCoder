#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    if(n >= 105){
        ans ++;
    }
    
    if(n >= 135){
        ans ++;
    }
    if(n>=165){
        ans ++;
    }
    
    if(n >= 189){
        ans ++;
    }

    if(n>=195){
        ans ++;
    }
    cout << ans << endl;
    return 0;
}