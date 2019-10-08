#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    int i_1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 1){
            i_1 = i;
        }
    }
    int ans ;
    ans = (n-2+(k-1))/(k-1);
    cout << ans << endl;
    return 0;
}