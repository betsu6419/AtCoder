#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = 0;
    int sum = 0;
    for(int i = 1;sum<x;i++){
        sum += i;
        ans = i;
    }
        cout << ans << endl;
    return 0;

}