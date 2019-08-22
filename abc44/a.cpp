#include<iostream>
using namespace std;

int main(){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int ans = 0;
    for(int i=0;i<min(k,n);i++){
        ans += x;
    }
    for(int i=0;i<(n-k);i++){
        ans += y;
    }
    cout << ans << endl;
    return 0;
}