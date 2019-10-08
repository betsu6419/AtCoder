#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
int main(){
    int n;cin >> n;
    int h = n/3600;
    int m = (n%3600)/60;
    int s = n%60;
    cout << setfill('0') << right << setw(2) << h;
    cout << ':';
    cout << setfill('0') << right << setw(2) << m;
    cout << ':';
    cout << setfill('0') << right << setw(2) << s;
    cout << endl;
    return 0;
}