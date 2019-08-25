#include<iostream>
using namespace std;
int main(){
    int m,d;
    cin >> m >> d;
    int ans = 0;
    for(int i=4;i<=m;i++){
        for(int j=22;j<=d;j++){
            if((j/10)*(j%10) == i&&(j/10) >= 2 && (j%10)>=2){
                ans ++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}