#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;
    cin >> n >> m;
    ll l[n];
    ll r[n];
    ll s[n];
    ll sum[m+2];
    ll total = 0;
    bool sw = true;
    for(int i=0;i<=m+1;i++){
        sum[i] = 0;
    }
    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i] >> s[i];
        sum[l[i]] +=s[i];
        sum[r[i]+1] -=s[i]; 
        total += s[i];
    }
    for(int i=0;i<m+1;i++){
        sum[i+1] += sum[i];
    }
    ll ans = 0;
   /* for(int i=1;i<m+1;i++){
        cout << sum[i] << " ";
    }
    cout << endl;*/
    for(int i=1;i<=m;i++){
        if(total-sum[i] > ans){
            ans = total-sum[i];
        }
    }

    cout << ans << endl;
    return 0;
}