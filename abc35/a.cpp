#include<iostream>
using namespace std;
int main(){
    int w,h;
    cin >> w >>h;
    int tmp;
    int a = w,b = h;
    while(b != 0){
        tmp = a%b;
        a = b;
        b = tmp;
    }
    w = w/a;h = h/a;
    cout << w << ':' << h << endl;
    return 0;
}