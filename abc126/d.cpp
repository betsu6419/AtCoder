#include<iostream>
#include<queue>
#include<tuple>
#include<utility>
#include<vector>
using namespace std;
queue <int> q;
int main(){
    int n;
    cin >> n;
    int ans[n+1];
    vector <vector <pair<int ,int> > > tree(n+1);
    for(int i=0;i<n-1;i++){
        int u,v,w;
        cin >> u >> v >> w;
        tree[u].push_back(make_pair(v,w));
        tree[v].push_back(make_pair(u,w));
    }
    for(int i=0;i<=n;i++){
        ans[i] = -1;
    }
    q.push(1);
    ans[1] = 0;
    while(!q.empty()){
        int num = q.front();q.pop();
        //cout << "num=" << num << endl;
        for(int i=0;i<tree[num].size();i++){
            //cout << "i=" << i << "tree[" << num <<"][" << i << "]" << tree[num][i].first<<" " <<tree[num][i].second<< endl;
            if(ans[ tree[num][i].first ] != -1){
                continue;
            }
            if(tree[num][i].second%2 == 0){
                ans[tree[num][i].first] = ans[num];
                //cout << "even" << endl;
            }
            else{
                ans[tree[num][i].first] = 1-ans[num];
                //cout << "odd" << endl;
            }
            q.push(tree[num][i].first);
        }
    }
    for(int i=1;i<=n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}