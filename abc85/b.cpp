#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());
    int ans =1;
    for(int i=0;i<n-1;i++){
        if(d[i] > d[i+1]){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}