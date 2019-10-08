#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int n=s.length();
    int m=t.length();
    vector<vector<int> > is(26);
    for(int i=0;i<n;i++){
        is[s[i]-'a'].push_back(i);
    }
    for(int i=0;i<n;i++){
        is[s[i]-'a'].push_back(i+n);
    }
    long long ans=0;
    int pos=0;
    for(int i=0;i<m;i++){
        int c = t[i]-'a';
        if(is[c].size() == 0){
            cout << -1 << endl;
            return 0;
        }
        pos = *lower_bound(is[c].begin(),is[c].end(),pos) + 1;
        if(pos >= n){
            pos -=n;
            ans += n;
        }
    }
    ans += pos;
    cout << ans << endl;
    return 0;
}