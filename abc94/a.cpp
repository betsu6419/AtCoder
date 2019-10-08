#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cin >> a >> b >>x;
    if(a>x || a+b<x){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}