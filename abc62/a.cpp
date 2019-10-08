#include<iostream>
using namespace std;

int main(){
    int in[2];
    cin >> in[0] >> in[1];
    for(int i=0;i<2;i++){
        if(in[i] == 2){
            in[i] = 3;
        }
        else if(in[i] == 4 || in[i] == 6 || in[i] == 9||in[i] == 11){
            in[i] = 2;
        }
        else{
            in[i] = 1;
        }
    }
    if(in[0] == in[1]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}