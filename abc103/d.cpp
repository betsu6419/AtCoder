#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int n;cin >> n;
    int m;cin >> m;
    vector<pair<int,int> > a(m) ;
    for(int i=0;i<m;i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a.begin(),a.end());
    int ans = 1;
    int last = a[0].first;
    for(int i=0;i<m;i++){
        if(a[i].second >= last){
            ans ++;
            last = a[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}