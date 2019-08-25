#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    ll n,d,k;
    cin >> n >> d >> k;
    ll l[d],r[d],s[k],t[k];
    for(int i=0;i<d;i++){
        cin >> l[i] >> r[i]; 
    }
    for(int i=0;i<k;i++){
        cin >> s[i] >> t[i];
    }
    bool sw[k];
    for(int i=0;i<k;i++){
        sw[i] = true;
    }
    ll ans[k];
    for(int i=0;i<d;i++){
        for(int j=0;j<k;j++){
            if(sw[j]){
                if(l[i] <= s[j] && s[j] <= r[i] && s[j] < t[j]){
                    s[j] = r[i];
                    if(s[j] >= t[j]){
                        ans[j] = i+1;
                        sw[j] = false;
                    }
                }

                else if(l[i] <= s[j] && s[j] <= r[i] && s[j] > t[j]){
                    s[j] = l[i];
                    if(s[j] <= t[j]){
                        ans[j] = i+1;
                        sw[j] = false;
                    }
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        cout << ans[i] << endl;
    }
    return 0;
}   