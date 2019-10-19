#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans += max((int)(lower_bound(v.begin(),v.end(),v[i] + v[j])-v.begin())-j-1,(int)0);
        }
    }
    cout << ans << endl;
    return 0;
}