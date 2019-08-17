#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l[n];
    int r[n];
    int ans = 0;
    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i];
        ans += r[i]-l[i] + 1;
    }   
    cout << ans << endl;
    return 0;

}