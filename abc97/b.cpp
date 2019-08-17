#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = 1;
    for(int i=2;i<=40;i++){
        for(int j=2;j<=10;j++){
            if(x>= pow(i,j)){
                if(ans < pow(i,j)){
                    ans = pow(i,j);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}