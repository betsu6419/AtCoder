#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
bool prime[1000000];

bool isprime(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ll q;
    cin >> q;
    prime[0] = 0;
    prime[1] = 0;
    for(int i=2;i<=100000;i++){
        if(isprime(i)){
            prime[i] = true;
        }
        else{
            prime[i] = false;
        }
    }
    ll sum[1000000];
    sum[0] = 0;
    sum[1] = 0;
    for(int i=2;i<=100000;i++){
        if(i%2 == 0){
            sum[i] = sum[i-1];
        }
        else{
            if(prime[i] && prime[(i+1)/2]){
                sum[i] = sum[i-1] + 1;
            }
            else{
                sum[i] = sum[i-1];
            }
        }
    }
    #if TEST
        for(int i=0;i<10;i++){
            if(prime[i]){
                cout << i << endl;
            }
            else{}
        }
    #endif
    for(int i=0;i<q;i++){
        ll l; ll r;
        cin >> l >> r;
        cout << sum[r]- sum[l] + (sum[l] - sum[l-1]) << endl;
    }
    return 0;
}