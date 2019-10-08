#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int num = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if(tmp >0){
            sum += tmp;
            num ++;
        }
    }
    cout << (sum-1+num)/num << endl;
    return 0;
}