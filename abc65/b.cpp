#include<iostream>
using namespace std;

int main(){
   int n;
   cin >> n;
   int a[n];
   bool b[n];
   for(int i=0;i<n;i++){
       cin >> a[i];
       b[i] = false;
   } 
    int ans = 0;
    int i = 0;
    while(1){
        if(i == 1){
            break;
        }
        else if(b[a[i]-1] == true){
            ans = -1;
            break;
        }
        else{
            b[a[i]-1] = true;
            i = a[i]-1;
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}