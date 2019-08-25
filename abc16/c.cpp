#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v[n];
    for(int i=0;i<m;i++){
        int a,b;cin >> a >> b;
        if(a != b){
            a--;b--;
            v[a].push_back(b);
            v[b].push_back(a);
        }
    }
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=0;j<v[i].size();j++){
            for(int k=0;k<v[v[i][j]].size();k++){
                if(v[v[i][j]][k] != i && (upper_bound(v[i].begin(),v[i].end(),v[v[i][j]][k])-lower_bound(v[i].begin(),v[i].end(),v[v[i][j]][k])) == 0){
                    s.insert(v[v[i][j]][k]);
                    
                    //cout <<i+1 << " " << v[i][j] + 1 << " " << v[v[i][j]][k]+1 << endl;
                }
            }   
        }
        cout << s.size() << endl;
    }
    return 0;
}