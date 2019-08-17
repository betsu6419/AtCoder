#include <iostream>

using namespace std;

int main(){
    int n,d,x;
    cin >> n >> d >>x;
    int a[n];
    int ans = x;
    for(int i=0;i<n;i++){
        cin >> a[i];
        for(int j=0;a[i]*j+1<=d;j++){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}