#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n;
    int digit = 0;
    while(1){
        digit += n%10;
        n /=10;
        if(n == 0){
            break;
        }
    }
    if(x%digit == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" <<endl;
    }
    return 0;
}