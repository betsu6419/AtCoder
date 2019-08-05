#include <iostream>
#include<cmath>
using namespace std;
int n;
int w[1000];
int main(){
    cin >> n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> w[i];
        sum += w[i];
    }
    int min = 1000000;
    for(int i=0;i<(n-1);i++){
        sum -= 2*w[i];
        if(abs(sum) < min){
            min = abs(sum);
        }
    }
    cout << min << endl;
    return 0;
}