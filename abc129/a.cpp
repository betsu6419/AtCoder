#include<iostream>
using namespace std;

int main(){
    int p,q,r;
    cin >> p >> q >> r;
    int Max = max(p,max(q,r));
    int ans = p+q+r-Max;
    cout << ans << endl;
    return 0;
}