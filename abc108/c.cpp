#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int mod0=0,modk2=0;
    long long ans = 0;
    if(k%2 == 1){       
        for(int i=1;i<=n;i++){
            if(i%k==0){
                mod0 ++;
            }
        }
        ans += pow(mod0,3);
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%k==0){
                mod0 ++;
            }
            if(i%k == k/2){
                modk2 ++;
            }
        }
        ans += pow(mod0,3) + pow(modk2,3);
    }
    cout << ans << endl;
    return 0;
}