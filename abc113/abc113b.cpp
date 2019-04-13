#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

int main(){
    int n,t,a;
    cin >> n >> t >> a;
    vector <double> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    float min=1000000;
    int ans=0;
    for(int j=0;j<n;j++){
        double hei = t - 0.006*h[j];
        double sub = abs(hei-a);
        if(sub < min){
            min = sub;
            ans = j+1;
        }     
    }
    cout << ans << endl;
}