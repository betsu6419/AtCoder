#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;cin >> a >> b;
    cout << min(abs(a-b),min(10-a+b,10-b+a)) << endl;
    return 0;
}