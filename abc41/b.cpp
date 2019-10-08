#include<iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    cout << (((b*c)%1000000007) * a)%1000000007 << endl;
    return 0;
}