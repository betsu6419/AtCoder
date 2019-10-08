#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    int ans = 0;
    for(int i=sqrt(m);i >= 1;i--){
        if(m%i == 0){
            int tans = 0;
            int tmp = m/i;
            if(tmp >= n){
                tans = i;
            }

            if(i >= n){
                tans = max(tmp,tans);
            }

            if(tans > ans){
                ans  =tans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}