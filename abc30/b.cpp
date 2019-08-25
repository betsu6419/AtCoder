#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    n = n%12;
    double a_n = (double)30*(double)n + (double)m/(double)2;

    double a_m = (double)6*(double)m;
    //cout << a_n << " " << a_m << endl;
    printf("%.10lf\n",min(abs(a_n-a_m),360-abs(-a_m+a_n)));
    return 0;
}