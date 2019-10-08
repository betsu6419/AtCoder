#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+2];
    int diff[n+2];
    
    a[n+1] = 0;
    a[0] = 0;
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }
    long long sum = 0;
    for(int i=0;i<n+1;i++){
        diff[i] = abs(a[i+1]-a[i]);
        sum += diff[i];
    }
    for(int i=0;i<n;i++){
        cout << sum-diff[i] - diff[i+1] + abs(a[i]-a[i+2]) <<endl;
    }
    return 0;
}