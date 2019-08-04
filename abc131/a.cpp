#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    char tmp = a[0];
    for(int i = 1;i<4;i++){
        if(tmp == a[i]){
            cout << "Bad" << endl;
            return 0;
        }
        tmp = a[i];
    }
    cout << "Good" << endl;
    return 0;
}