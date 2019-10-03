#include <iostream>
using namespace std;

int main(){
    double n,k;
    cin >> n >> k;
    double ans=0;
    for(double i=1;i<=n;i++){
        double p = 1/n;
        double tmp = i;
        while(tmp < k){
            p/=2;
            tmp *= 2;
        }
        ans += p;
    }
    cout << ans << endl;
    return 0;
}