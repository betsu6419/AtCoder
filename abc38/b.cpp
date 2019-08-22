#include<iostream>
using namespace std;

int main(){
    int h_1,w_1,h_2,w_2;
    cin >> h_1>>w_1>>h_2>>w_2 ;
    if(h_1 == h_2 || w_1 == w_2 || h_1 == w_2 || w_1 == h_2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}