#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll sum =0;
    ll ans1 = 0;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        sum += a[i];
        if(i%2==0){
            if(sum <= 0){
                ans1+= abs(1-sum);
                sum = 1;
            }
        }
        else{
            if(sum >= 0){
                ans1 += abs(-1-sum);
                sum = -1;
            }
        }
    }

    ll ans2 = 0;
    sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(i%2==1){
            if(sum <= 0){
                ans2+= abs(1-sum);
                sum = 1;
            }
        }
        else{
            if(sum >= 0){
                ans2 += abs(-1-sum);
                sum = -1;
            }
        }
    }

    ll ans = min(ans1,ans2);
    cout << ans << endl;
    return 0;
       
}