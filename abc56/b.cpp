#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,w;
    cin >> w >> a >> b;
    if(a>b){
        int tmp = a;
        a = b;
         b = tmp;
    }
    int diff = b-(a+w);
    if(diff<0){
        cout << "0" << endl;
    }
    else{
        cout << diff << endl;
    }
    return 0;
}