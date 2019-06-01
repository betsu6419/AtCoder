#include <iostream>
using namespace std;
int main(){
    int r,d;
    int x[3000];
    cin >> r >> d >> x[2000];
    for(int i=1;i<11;i++){
        x[2000+i] = x[1999+i]*r-d;
        cout << x[2000+i] << endl;
    }
    return 0;
}