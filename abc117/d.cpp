#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin >> n;
    ll k;cin >> k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    bool sw = false;
    for(int i=39;i>=0;i--){
        int count1 = 0;
        int count0 = 0;
        for(int j=0;j<n;j++){
            if(((a[j] >> i)&1) == 1 ){
                count1 ++;
            }
            else{
                count0 ++;
            }
        }
        //cout << "i=" << i << "count1=" << count1 << "count0=" << count0 << endl;
        if(!sw){
            if(count1 >= count0 && ((k >> i)&1) == 0){
                ans = ans <<1;
            }
            else if(count0 > count1 && ((k >> i)&1) == 1){
                ans = ans << 1;
                ans += 1;
            }
            else if(count1 >= count0 && ((k >> i)&1) == 1){
                ans = ans << 1;
                sw = true;
            }
            else{
                ans = ans << 1;
            }
        }
        else{
            if(count1 >= count0){
                ans = ans << 1;
            }
            else{
                ans = ans << 1;
                ans ++;
            }
        }
    }
    //cout << "ans = " << ans << endl;
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum += ans^a[i];
    }
    cout << sum << endl;
    return 0;
}