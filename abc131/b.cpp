#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int l;
    int sum = 0;
    int f[300];
    cin >> n >> l;
    for(int i = 1;i<=n;i++){
        f[i] = l+i-1;
        sum += f[i];
    }
    int ans = 0;
    int diff = 200; 
    for(int i = 1;i<=n;i++){
        int tmp = sum-f[i];
        if(diff > abs(sum-tmp)){
            diff = abs(sum-tmp);
            ans = tmp;
        }
    }
    cout << ans <<endl;
    return 0;
}