#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    cout << long(m*1900+(n-m)*100)*(pow(2,m)) << endl;
    return 0;
}