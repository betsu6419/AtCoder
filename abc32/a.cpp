#include<iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int tmp;
    if(a<b){
        tmp = b;
        b = a;
        a = tmp;
    }
    int c=a,d=b;
    while(d !=0){
        tmp = c%d;
        c = d;
        d = tmp;
    }
    tmp = a*b/c;
    int i=2;
    while(c<n){
        c = tmp * i; 
        i++;
    }
    cout << c << endl;
    return 0;
}