#include <iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n,m;
    cin  >> n >> m;
    vector <pair< int,int> > a;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(make_pair(1,tmp));
    }
    for(int i=0;i<m;i++){
        int tmpb,tmpc;
        cin >> tmpb >>tmpc;
        a.push_back(make_pair(tmpb,tmpc));
    }
    sort(a.begin(),a.end(),cmp);
    reverse(a.begin(),a.end());
    long long ans = 0;
    long long count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i].first;j++){
            ans += a[i].second;
            count ++;
            if(count == n){
                break;
            }
        }

        if(count == n){
            break;
        }
    }
    cout << ans << endl;
    return 0;
}