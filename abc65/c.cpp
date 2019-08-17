#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
long long factorial(long long n){
    long long ans=1;
    long long m = n;
    while(m!=0){
        ans *= m;
        ans = ans%1000000007;
        m = m-1;
    }
    return ans;
}
int main(){
    int n,m;
    cin >> n >> m;
    long long ans;
    if(abs(n-m) >1){
        ans = 0;
    }
    else if(abs(n-m) == 1){
        ans = (factorial(n)*factorial(m))%1000000007;
    }
    else{
        ans = (factorial(n)*factorial(m)*2)%1000000007;
    }
    cout << ans << endl;
    return 0;
}