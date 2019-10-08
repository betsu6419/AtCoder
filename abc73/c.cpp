#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> in(n+1);
    for(int i=0;i<n;i++){
        cin >> in[i];
    }
    in[n] = 2000000000;
    sort(in.begin(),in.end());
    int ans = 0;

    bool tmp=true;
    for(int i=0;i<n;i++){
        if(in[i]==in[i+1]){
            tmp = !(tmp);
        }
        else{
            if(tmp){
                ans ++;
            }
            else{
                tmp = true;
            }
        }
    }
    cout << ans << endl;
    return 0;
}