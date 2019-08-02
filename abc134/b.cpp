#include <iostream>
using namespace std;

int main(){
    int n;
    int d;
    cin >> n >> d;
    int a = 2*d + 1;
    int ans;
    if(n%a == 0){
        ans = n/a;
    }
    else{
        ans = n/a+1;
    }
    cout << ans << endl;
    return 0;
}