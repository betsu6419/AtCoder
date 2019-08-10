#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
/*
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    else{
        return a.first > b.first;
    }
}*/

int main(){
    int n,m;
    cin >> n >> m;
    priority_queue <int> q;
    vector<vector<int> > in(100000);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        in[a].push_back(b);
    }
    long long ans = 0;
    
    for(int i=1;i<=m;i++){
        //cout << now <<endl;
        for(int j=0;j<in[i].size();j++){
            q.push(in[i][j]);
        }
        if(!q.empty()){
            ans += q.top();
            q.pop();
        }
    }
    cout << ans <<endl;
    return 0;
}