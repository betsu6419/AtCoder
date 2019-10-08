#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    while(v.size() >0){    
        int max = 0;
        int index = 0;
        for(int i=0;i<v.size();i++){
            if(v[i] >=max && i+1 == v[i]){
                max = v[i];
                index = i;
            }
        }
        if(max == 0){
            cout <<"-1" << endl;
            return 0;
        }
        else{
            ans.push_back(max);
            v.erase(v.begin()+index);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[ans.size()-1-i] << endl;
    }
    return 0;
}