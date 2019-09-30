#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    double ans;
    if(n%2 == 0){
        ans = 0.50000000;
    }
    else{
        ans = (double)(n/2+1)/(n);
    }
    printf("%.9f\n",ans);
    return 0;
}