#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }   
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    double s = 0;
    for(int i=0;i<n;i++){
        if(i %2 == 0){
            s += a[i]*a[i];
        }
        else{
            s -= a[i]*a[i];
        }
    }
    s *= M_PI;
    printf("%.10lf\n",s);
    return 0;
}