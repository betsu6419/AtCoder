#include<iostream>
using namespace std;
int main(){
    int n,x;cin >> n >> x;
    int sum;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if((x>>i)&1){
            sum += tmp;
        }
    }
    cout << sum << endl;
    return 0;
}