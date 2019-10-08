#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main(){
    int n;cin >> n;
    int sum = 0;
    vector<pair<int ,string > > v;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            sum += i*j;
            string s = to_string(i) +" x " +to_string(j);  
            v.push_back(make_pair(i*j,s));
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i].first == sum - n){
            cout << v[i].second << endl;
        }
    }
    return 0;
}