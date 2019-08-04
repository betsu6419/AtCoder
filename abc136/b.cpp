#include <iostream>
#include <cmath>
using namespace std;
int n;
int main(){
    cin >> n;
    int digit=0;
    int tmp = n;
    for(int i=0;i<n;i++){
        tmp = tmp/10;
        digit ++;
        if(tmp <10){
            break;
        } 
    }
    if(n<10){
        digit = 0;
    }
    int surp =n-pow(10,digit); 
    int ans = 0;
    for(int i=0;i<digit;i=i+2){
        ans += pow(10,i+1) - pow(10,i);
        //cout << ans << endl;
    }
    if(digit%2 == 0){
        ans += surp+1;
    }
    cout << ans << endl;
    return 0;
}