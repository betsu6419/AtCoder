#include<iostream>
using namespace std;

int main(){
    int a;cin >> a;
    int ans = 0;
    for(int i=1;i<=a/2;i++){
        if(ans < i*(a-i)){
            ans  =i*(a-i);
        }
    }
    cout << ans << endl;
    return 0;
}