#include <iostream>
using namespace std;
int n;
int a[1000000];
int b[1000000];
int main (){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=n;i>=1;i--){
        int quo = n/i;
        int sum = 0;
        for(int j=2;j<=quo;j++){
            sum += b[j*i];
        }
        //cout << "sum[" << i << "]=" << sum << endl;
        int surplus ;
        if(sum != 0){
            surplus = sum%2;
        } 
        else{
            surplus = 0;
        }

        if(surplus == a[i]){
            b[i] = 0;
        }
        else{
            b[i] = 1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(b[i] == 1){
            ans ++;
        }
    }
    cout << ans << endl;
    if(ans == 0){
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(b[i] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}