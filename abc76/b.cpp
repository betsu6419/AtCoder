#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int ans = 100000000;
    for(int i=0;i<=n;i++){
        int tmp = 1;
        for(int j=1;j<=i;j++){
            tmp *=2;
        }
        for(int j=1;j<=n-i;j++){
            tmp += k;
        }
        if(ans > tmp){
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}