#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

bool cmp(pair<int ,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair <int,int> > v;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(make_pair(i+1,tmp));
    }
    sort(v.begin(),v.end(),cmp);
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i].first << endl;

    }
    return 0;
}