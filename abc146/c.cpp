#include<iostream>
using namespace std;

int main(){
    long long a,b,x;
    cin >> a >> b >> x;
    long long ub = 1000000000;
    long long lb = 0;
    long long mid = 500000000;
    if(a*ub + b*10 <= x){
        cout << ub << endl;
        return 0;
    }
    while(ub-lb > 1){
        long long digit = 1;
        long long tmp = mid;
        while(tmp/10!=0){
            digit++;
            tmp /= 10;
        }
        if(a*mid + b*digit > x){
            ub = mid;
            mid = (ub+lb)/2;
        }
        else{
            lb = mid;
            mid = (ub+lb)/2;
        }
    }     
    cout << lb << endl;
    return 0;
}