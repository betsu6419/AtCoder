#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int n = b-a;
    int ans = 0;
    for(int i=1;i<n;i++){
        ans += i;
    }
    cout << ans-a << endl;
    return 0;
}