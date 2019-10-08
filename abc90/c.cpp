#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long ans = 0;
    if(n==1&&m==1){
        ans = 1;
    }
    else if(n==1 || m==1){
        ans = (long long)abs(n-m)-1;
    }
    else{
        ans = (long long)(n-2)*(m-2);
    }
    cout <<ans << endl;
    return 0;
}