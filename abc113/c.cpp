#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector <int>  p(m+1);
    vector <int> y(m+1); 
    vector <int> id[n+1];
    for(int i=0;i<m;i++){
        cin >> p[i] >> y[i];
        id[p[i]].push_back(y[i]);
    }
    for(int i=0;i<n;i++){
        sort(id[i+1].begin(),id[i+1].end());
    }
    for(int i=0;i<m;i++){
        printf("%012lld\n",(long long)(p[i])*1000000 + (long long)(lower_bound(id[p[i]].begin(),id[p[i]].end(),y[i])-id[p[i]].begin()+1));
    }
    return 0;
}