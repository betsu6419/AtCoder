#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    int c;
    c = a+b;
    if(c%2 != 0){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << c/2 << endl;
    }
}