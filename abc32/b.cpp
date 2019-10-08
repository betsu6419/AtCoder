#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans,n;cin >> n;
    if(s.size() <n){
        ans =0;
        cout << ans << endl;
        return 0;
    }
    vector<string> v;
    for(int i=0;i<=s.size()-n;i++){
        string t = s.substr(i,n);
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    /*for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }*/
    ans = v.size();
    cout << ans << endl;
    return 0;
    
}