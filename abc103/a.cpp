#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >>c;
    int ans;
    int d,e,f;
    d = abs(a-b);
    e = abs(b-c);
    f = abs(c-a);
    cout << min(d+e,min(e+f,f+d))<<endl;
    return 0;
}