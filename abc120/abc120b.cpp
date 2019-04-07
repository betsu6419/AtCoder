#include <iostream>
using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    if(a<b){
       int tmp = b;
        b = a;
        a = tmp;
    }
    bool klist[b+1];
    int i,j=0;
    for(i = 1;i <= b;i++){   
        if((a%i==0)&&(b%i==0)){
            klist[i] = true;
        }
        else{
            klist[i] = false;
        }
    }
    for(i = b;i > 0;i--){
        if(klist[i] == true){
            j ++;
            if(j == k){
                cout << i;
            }
        }
    }
}