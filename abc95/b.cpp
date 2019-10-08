#include<iostream>
using namespace std;

int main(){
    int n;
    int x;
    cin >> n >> x;
    int m[n];
    int ans = n;
    int min = 1000000000;
    for(int i=0;i<n;i++){
        cin >>m[i];
        x -= m[i];
        if(min>m[i]){
            min = m[i];
        }
    }
    ans += x/min;
    cout << ans << endl;
    return 0;

}