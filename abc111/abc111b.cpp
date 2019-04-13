#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=111;i<=999;i=i+111){
        if((i-n)>=0){
            cout << i << endl;
            return 0;
        }
    }
}