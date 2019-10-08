#include<iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int a[max(n,3)];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for(int i=3;i<n;i++){
        a[i] = (a[i-1] + a[i-2] + a[i-3])%10007;
    }
    cout << a[n-1] << endl;
    return 0;
}