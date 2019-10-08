#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;cin >> s;
    int n;cin >> n;
    vector<string> v;
    for(int i=1;i<=min(5,(int)s.size());i++){
        for(int j=0;j<s.size()-i+1;j++){
            string tmp = s.substr(j,i);
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout << v[n-1] << endl;
    return 0; 
}