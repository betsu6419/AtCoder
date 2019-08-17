#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<k;i++){
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}