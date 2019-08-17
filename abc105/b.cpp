#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<30;i++){
        for(int j=0;j<15;j++){
            if(n==4*i+7*j){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}