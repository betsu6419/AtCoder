#include<iostream>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    for(int i=0;i<=n;i++){
        int j=4*n-m-2*i;
        int k = n-i-j;
        if(j >= 0&&k >= 0&&2*i+j*3+4*k == m){
            cout << i << " " << j << " " << k << endl;
            return 0;
        }
    }
    cout << -1 <<" " << -1 << " " << -1 << endl;
    return 0;
}