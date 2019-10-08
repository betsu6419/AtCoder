#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int x[n];
    int firstp = 1000000000;
    for(int i=0;i<n;i++){
        cin >> x[i];
        if(firstp == 1000000000&&x[i]>=0){
            firstp = i;
        }
    }
    if(firstp == 1000000000){
        firstp = n;
    }
    long long ans = 1000000000;
    for(int i=max(firstp-k,0);i<=min(n-k,firstp);i++){
        if(x[i] <0 && x[i+k-1]>0){
            if(abs(x[i])*2+x[i+k-1] <ans){
                ans = abs(x[i])*2+x[i+k-1];
            }
            if(abs(x[i])+x[i+k-1]*2<ans){
                ans = abs(x[i])+x[i+k-1]*2;
            }
        }
        else if(x[i+k-1]<=0){
            if(abs(x[i]) < ans){
                ans = abs(x[i]);
            }
        }
        else{
            if(x[i+k-1] < ans){
                ans = x[i+k-1];
            }
        }
    }
    cout << ans << endl;
    return 0;
}