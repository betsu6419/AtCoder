#include<iostream>
#include<cmath>

using namespace std;

int rui(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    int c = rui(n);
    int d = rui(n-2);
    return 0;
}