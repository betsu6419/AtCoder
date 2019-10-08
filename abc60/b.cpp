#include<iostream>
using namespace std;



int main(){
    int a,b,c;
    cin >> a >> b >>c;
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b  =tmp;
    }
    while(b !=0){
        tmp = a%b;
        a = b;
        b = tmp;
    }
    if(c%a != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}