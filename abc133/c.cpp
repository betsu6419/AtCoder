#include<iostream>
using namespace std;
int l;
int r;
int main(){
    cin >> l >> r;
    int surp_l =l%2019;
    int d = r-l;
    long long  ans = 10000000;
    if((d+surp_l) >= 2019){
        ans = 0;
    } 
    else{
        for(int i=0;i<d;i++){
            for(int j = (i+1);j <= d;j++){
                int tmp = ((surp_l+i) * (surp_l+j))%2019; 
                if(ans > tmp){
                    ans = tmp;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}