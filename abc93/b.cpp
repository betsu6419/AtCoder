#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b,k;
    cin >> a >>b >> k;
    vector <int>ans;
    for(int i=0;i<k;i++){
        if(a+i <= b){
            ans.push_back(a+i);
        }
        if(b-i >= a){
            ans.push_back(b-i);
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i = 0;i<min(2*k,b-a+1);i++){
        cout << ans[i] << endl;
    }
    return 0;
}