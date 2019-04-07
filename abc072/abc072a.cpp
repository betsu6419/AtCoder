#include <iostream>
#include <vector>

using namespace std;

int main(){
    long x,t;
    cin >> x >> t;
    if(x<=t){
        cout << 0;
    }
    else{
        cout << x-t;
    }
    return 0;
}