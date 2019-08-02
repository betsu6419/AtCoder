#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int a;
    int b;
    cin >> n>> a >> b;
    cout << min(n*a,b) << endl;
    return 0;
}