#include <iostream>
#include<vector>
#include<cmath>

using namespace std;
int main(){
    int n;cin>>n;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin>> t[i];
    }
    int ans = 5000;
    for(int i=0;i<(1<<n);i++){
        //cout << i << endl;
        int sum1=0,sum2=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum1 += t[j];
            }
            else{
                sum2 += t[j];
            }
        }
        int tans = max(sum1,sum2);
        if(tans<ans){
            ans = tans;
        }
    }
    cout << ans << endl;
}