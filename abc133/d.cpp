#include<iostream>
using namespace std;
int n;
int a[1000000];
int ans[1000000];
long sum;
long sum_odd;
int main(){
    cin >> n;
    sum = 0;
    sum_odd = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        if(i%2 == 1){
            sum_odd += a[i];
        }
    }
    ans[0] = sum - 2*sum_odd;
    for(int i=1;i<n;i++){
        ans[i] = 2*a[i-1]-ans[i-1];
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " " ;
    }
    cout << endl;
    return 0;
}