#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
int main(){
    double m;cin >> m; m /= (double)1000;
    int ans;
    if(m < 0.1){
        ans = 0;
    }
    else if(m <= 5){
        ans = 10*m;
    }
    else if(m<= 30){
        ans = m + 50;
    }
    else if(m <= 70){
        ans = (m-30)/5 + 80;
    }
    else{
        ans = 89;
    }
    cout <<setfill('0') << right << setw(2)<< ans << endl;
    return 0;
}