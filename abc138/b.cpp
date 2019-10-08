#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double ans;
    double b[n];
    double c = 1;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans +=(double)(1)/(double)(a);
    }
    ans = (double)(1)/(double)(ans);
    printf("%.10lf\n",ans);
    return 0;
}