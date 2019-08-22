#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
typedef long long ll;
using namespace std;

int main(){
    ll n,k;
    cin >> n >> k;
    ll a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] = 0;
    ll sum = 0;
    ll tmp = 0;
    for(int i=0;i<k;i++){
        tmp += a[i];
    }
    for(int i=0;i<n-k+1;i++){
        sum += tmp;
        tmp -=a[i];
        tmp +=a[i+k];
    }
    cout << sum << endl;
    return 0;
}