#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,sum=0,hei;
    cin >> n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    hei = sum / n;
    vector<int> b(n,0);
    for(int i=0;i < n;i++){
        int ans = a[i] - hei;
        ans<0 ? (ans = -ans):ans = ans;
        cout << ans << endl;
    }
    return 0;
}