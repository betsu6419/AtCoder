#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n+1],x[n+1],y[n+1];
    for(int i=1;i<n+1;i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    t[0] = 0;x[0] = 0;y[0] = 0;
    for(int i=0;i<n;i++){
       int dt = t[i+1]-t[i];
        int dx = abs(x[i+1] - x[i]);
        int dy = abs(y[i+1] - y[i]);
        if( !((dt-(dx+dy)) >=0&&(dt-(dx+dy))%2==0)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;


}