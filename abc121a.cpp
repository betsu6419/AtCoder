#include <iostream>
using namespace std;

int main(){
    int H,W,h,w,all,ans;
    cin >> H >> W >> h >> w;
    all = H * W;
    ans = all - h*W - w * H + h * w;
    cout << ans;
}