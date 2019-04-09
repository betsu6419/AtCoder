#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k;
    cin >> k;
    int s,x,y,z,ans=0;
    cin >> s;
    for(x = 0;x<=k;x++){
        for(y = 0;y<=k;y++){
            if((s-x-y<=k)&&(s-x-y>=0) ){
                ans ++;
            }
        }
    }
    cout << ans;
    return 0;
}