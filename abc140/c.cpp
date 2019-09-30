#include<iostream>
using namespace std;
int main(){
    int n;cin >> n ;
    int ans  =0;
    int b[n];
    for(int i=0;i<n-1;i++){
        cin >> b[i];
    }
    ans += b[0];
    for(int i=0;i<n-2;i++){
        ans += min(b[i],b[i+1]);
    }
    ans += b[n-2];
    cout << ans << endl;
    return 0;
}