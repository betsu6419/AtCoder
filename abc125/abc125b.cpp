#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n],c[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    int ans = 0;
    for(int i=0;i<(1<<n);i++){
        int x=0,y=0,tans;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                x += v[j];
                y += c[j];
            }
        }
        tans = x-y;
        if(tans > ans){
            ans = tans;
        }
    }
    cout << ans << endl;
    return 0;
}