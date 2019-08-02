#include <iostream>
using namespace std;
int n;
int a[1000000];
int Max = 0;
int max_i = 0;
int  nmax = 0;
int nmax_i =0; 

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] >= Max){
            nmax = Max;
            nmax_i = max_i;
            Max = a[i];
            max_i = i;
        }
        else if(a[i] >= nmax){
            nmax = a[i];
            nmax_i = i;
        }
    }
    for(int i = 0;i<n;i++){
            if(i == max_i){
                cout << nmax << endl;
            }
            else{
                cout << Max << endl;
        }
 
}
}