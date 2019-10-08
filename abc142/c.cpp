#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int n;cin >> n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        v.push_back(make_pair(tmp,i+1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}