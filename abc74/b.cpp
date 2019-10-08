#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int ans =0 ;
    for(int i=0;i<n;i++){
        ans += 2*min(x[i],k-x[i]);
    }
    cout << ans << endl;
    return 0;
}