#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll ans = 0;
    for(long long  i=0;i<s.size();i++){
        for(ll j=i;j<s.size();j++){
            string tmp = s.substr(i,j-i+1);
            ll k = (ll)stoll(tmp);
            if(i == 0 ||j == s.size()-1){
                ans += k*pow((ll)2,llabs((ll)s.size()-1-(j-i+1)));
            }
            else{
                ans += k*pow((ll)2,llabs((ll)s.size()-1-(j-i+2)));
            }
           // cout << "i=" << i << "ans =" << ans << endl;
        }
    }
    ans -= stoll(s);
    cout << ans << endl;
    return 0;
}