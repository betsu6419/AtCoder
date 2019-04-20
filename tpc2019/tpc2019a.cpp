#include <iostream>
using namespace std;

int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    int ta,tb;
    ta = max(a,b);
    tb = min(a,b);
    bool ok = false;
    for(int i= tb;i <= ta;i++){
        if(i == c){
            ok = true;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}