#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >>b;
    int ans =0;
    for(int i=1;i<=n;i++){
        int digit = 0;
        int num = i;
        while(num!=0){
            digit += num%10;
            num /= 10;
        }
        if(digit>= a&&digit <= b){
            ans +=i;
        }
    }
    cout << ans << endl;
    return 0;
}