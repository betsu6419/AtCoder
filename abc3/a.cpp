#include<iostream>
using namespace std;
int main(){
    int n;cin >> n;
    double ans;
    for(int i=1;i<=n;i++){
        ans += (double)10000*i/(double)n;
    }
    printf("%.10lf\n",ans);
    return 0;
}