#include <iostream>
using namespace std;
typedef long long LL;
LL sum[1000000];
int a[1000000];
int n;
int k;
int main(){
    cin >> n >> k;
    sum[0] = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum[i+1] = a[i] + sum[i]; 
    }
    while()
}