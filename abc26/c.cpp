#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i=2;i<=n;i++){
        cin >> a[i];
    }
    a[1] = 1;
    ll b[n+1];
    vector<ll> v[n+1];
    for(int i=n;i>=1;i--){
        if(v[i].empty()){
            b[i] = 1;
            v[a[i]].push_back(i);
        }
        else{
            ll min = 1000000000;
            ll max = 0;
            for(int j=0;j<v[i].size();j++){
                if(b[v[i][j]] < min){
                    min = b[v[i][j]];
                }
                if(b[v[i][j]] > max){
                    max = b[v[i][j]];
                }
            }
            b[i] =max+min+1;
            v[a[i]].push_back(i);
        }
        //cout << "i=" << i << "b[" << i <<"]=" << b[i] << endl; 
    } 
    cout << b[1] << endl;
    return 0;
}