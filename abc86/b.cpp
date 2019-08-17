#include<iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    cin >> a >> b;
    if(b/100 !=0){
        c = 1000*a+b;
    }
    else if(b/10!=0){
        c = 100*a+b;
    }
    else{
        c = 10*a+b;
    }
    for(int i=1;i<1000;i++){
        if(i*i==c){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" <<endl;return 0;
}