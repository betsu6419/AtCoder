#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long  ans = 1;
    for(long long  i=1;i<=n;i++){
        ans = (ans*i)%1000000007;
    }
    cout << ans << endl;
    return 0;
}