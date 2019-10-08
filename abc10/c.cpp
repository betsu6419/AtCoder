#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sx,sy,gx,gy,t,v,n;
    cin >> sx>> sy >> gx >> gy >> t >> v  >>n;
    int x[n],y[n];
    bool ans = false;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        if(sqrt((double)(x[i]-sx)*(x[i]-sx)+(double)(y[i]-sy)*(y[i]-sy))
        +sqrt((double)(x[i]-gx)*(x[i]-gx)+(double)(y[i]-gy)*(y[i]-gy)) <= t*v){
            ans = true;
        }
    }
    if(ans){
        cout << "YES"  << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;

}