#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    bool ans = true;
    for(int i=0;i<2;i++){ 
        for(int j=0;j<2;j++){
            if(a[i][j]-a[i][j+1] != a[i+1][j]-a[i+1][j+1]){
                ans = false;
            }
            if(a[i][j]-a[i+1][j] !=a[i][j+1]-a[i+1][j+1]){
                ans = false;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}