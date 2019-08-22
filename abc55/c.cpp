#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;
    cin >> n >> m;
    ll ans = 0;
    if(2*n >=m ){
        ans += m/(ll)(2);
    }
    else{
        ans += n;
        m = m-2*n;
        ans += m/(ll)(4);
    }
    cout << ans << endl;
    return 0;
}