#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    vector <string> ans;
    if(s.size() < t.size()){
        cout << "UNRESTORABLE"<<endl;
        return 0;
    }
    for(int i=0;i<=s.size()-t.size();i++){
        string tmp = s;
        for(int j=0;j<i;j++){
            if(tmp[j] == '?'){
                tmp[j] = 'a';
            }
        }
        for(int j=i+t.size();j<s.size();j++){
            if(tmp[j] == '?'){
                tmp[j] = 'a';
            }
        }
        for(int j=0;j<t.size();j++){
            if(s[j+i]!='?' && s[j+i] != t[j]){
                break;
            }
            else if(s[i+j] == '?'){
                tmp[i+j] = t[j];
            }
            if(j == t.size()-1){
                ans.push_back(tmp);
            }
        }
    }

    if(ans.empty()){
        cout << "UNRESTORABLE"<<endl;
        return 0;
    }
    else
    {
        sort(ans.begin(),ans.end());
        cout << ans[0] << endl;
        return 0;
    }
}