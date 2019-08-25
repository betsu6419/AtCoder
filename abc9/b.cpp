#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;cin >> n;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int tmp = v[0];
    for(int i=1;i<n;i++){
        if(v[i] != tmp){
            cout << v[i] << endl;
            return 0;
        }
    }
}