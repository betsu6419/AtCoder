#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a,b;cin >> a >> b;
    int ans = 1;
    int tmp = a;
    if(b == 1){
        cout << 0 << endl;
        return 0;
    }
    while(tmp < b){
        tmp --;
        tmp += a;
        ans ++;
    }
    cout << ans << endl;
    return 0;
}