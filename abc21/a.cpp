#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans;
    if(n%2 == 1){
        n = n-1;
        ans.push_back(1);
    }
    while(n>=8){
        n -= 8;
        ans.push_back(8);
    }
    while(n>=4){
        n-=4;
        ans.push_back(4);
    }
    while(n>=2){
        n -=2;
        ans.push_back(2);
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}