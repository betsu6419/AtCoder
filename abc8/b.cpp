#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin >> n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string tmp;cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    string ans;
    v.push_back("1111");
    int max = 0;
    int count=0;
    for(int i=0;i<n;i++){
        count ++;
        if(v[i] != v[i+1]){
            if(count > max){
                ans = v[i];
                max = count ;
            }
            count =0;
        }
    }
    cout << ans << endl;
    return 0;
}