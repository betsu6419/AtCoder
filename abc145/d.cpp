#include <iostream>
#include<vector>
#include<string>
using namespace std;
const int MOD=1000000007;
const int MAX = 1000001;

long long fac[MAX],finv[MAX],inv[MAX];

void COMinit(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i=2;i<MAX;i++){
        fac[i] = fac[i-1]*i%MOD;
        inv[i] = MOD -inv[MOD%i]*(MOD/i)%MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;   
    }
}
long long COM(int n,int k){
    if(n<k)return 0;
    if(n<0||k<0)return 0;
    return fac[n] * (finv[k] * finv[n-k]%MOD)%MOD;
}
/*
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
       // cout << fac[i] << " " << inv[i] << " " << finv[i]<<endl;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
*/
int main(){
    int x,y;
    cin >> x >> y;
    int a,b;
    COMinit();
    long long ans=0;
    if(x%2 == 0){
        b = x/2;
        a = 0;
    }
    else{
        b = x/2;
        a = 1;
    }
    //cout << a << " "<<b << endl;
    //cout << COM(100,2) << endl;
    while(b != -1){
        if(2*a + b == y){
          //  cout << a << " "<<b << endl;
            ans = (ans + COM(a+b,b))%MOD;
        }
        b -=1;
        a += 2;
    }
    cout << ans << endl;
    return 0;
}