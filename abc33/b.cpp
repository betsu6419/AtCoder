#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    string s[n];
    ll a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin >> s[i] >> a[i];
        sum += a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>sum/2){
            cout << s[i] << endl;
            return 0;
        }
        if(i == n-1){
            cout << "atcoder"<<endl;
            return 0;
        }
    }
    return 0;
}