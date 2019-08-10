#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n+1];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    h[n] = 1000000000;
    int i=0;
    long long ans = 0;
    while(i <= n-1){
        while(h[i] == 0){
            i ++;
        }
        if(i == n){
            break;
        }
        int min = 1000000000;
        int left = i;
        int right = i;
        for(int j=i;j<n;j++){
            if(h[j] == 0){
                break;
            }
            if(min > h[j]){
                min = h[j];
            }
            right = j;
        }
        
        for(int j = left;j<=right;j++){
            h[j]-= min;
        }
        ans += min;
        
        while(h[i] == 0){
            i ++;
        }
    }
    cout << ans << endl;
    return 0;
}