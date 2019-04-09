#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,y;
    cin >> n >> y;
    int sum=0;
    int a=0,b =0,c =0;
    if(y/10000 > n){
        cout << "-1 -1 -1"<<endl;
        return 0;
    }
    for(a =0;a<=(y/10000);a++){
        for(b=0;b<=(y/5000);b++){
            c = (y-10000*a-5000*b)/1000;
            if(a+b+c == n){
                cout << a << b << c;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;

}