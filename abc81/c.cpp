#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a.push_back(1000000000);
    sort(a.begin(),a.end());
    int count = 0;
    int veri  =0;
    for(int i=0;i<n;i++){
        count ++;
        if(a[i] != a[i+1]){
            b.push_back(count);
            count =0;
            veri ++;
        }
    }
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i< (veri-k);i++){
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}