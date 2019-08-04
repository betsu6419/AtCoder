#include <iostream>
using namespace std;

int main(){
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    int ans;
    if(x == w/2 && y == h/2){
        ans = 1;
    }else{
        ans = 0;
    }
    double a = w*(h/2);
    cout << a << " " << ans << endl;
return 0;
}