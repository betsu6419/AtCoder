#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int ans = 1000000000;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        int tmp=0;
        while(a%2==0){
            a/=2;
            tmp ++;
        }
        if(tmp < ans){
            ans = tmp;
        }
    }
    cout <<ans << endl;
    return 0;
}