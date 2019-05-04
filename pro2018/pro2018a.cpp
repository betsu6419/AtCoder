#include <iostream>
using namespace std;

int main(){
    char in[5];cin >> in;
    bool ok = true;
    char c;
    if(in[0] != 'y'){
        ok = false;
    }

    if(in[1] != 'a'){
        ok = false;
    }

    if(in[2] != 'h'){
        ok = false;
    }

    if(in[4] != in[3]){
        ok = false;
    }
    if(ok){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}