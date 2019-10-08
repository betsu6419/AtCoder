#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
#include<cmath>
using namespace std;

int main(){
    long long n;cin >> n;
    long long ans = ((n-1)*(n))/2;
    cout << ans << endl;
    return 0;
}