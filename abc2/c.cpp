#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x[3],y[3];
    for(int i=0;i<3;i++){
        cin >> x[i] >> y[i];
    }
    double x1,y1,x2,y2;
    x1 = x[1]-x[0];
    y1 = y[1]-y[0];
    x2 = x[2]-x[0];
    y2 = y[2]-y[0];
    double ans = (double)abs(x1*y2 - x2*y1)/(double)2;
    printf("%.10lf\n",ans);
    return 0;
 }