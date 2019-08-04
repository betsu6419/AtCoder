#include <iostream>
using namespace std;
long long ans[10000];
int n;
int k;
int main(){
    cin >> n;
    cin >> k;
    ans[1] = n-k+1;
    for(int i=1;i<k;i++){
        if((n-k+1-i) == 0){
            ans[i+1] = ((ans[i]*(k-i))/(i*(i+1)))%1000000007;    
        }
        else{
            ans[i+1] = ((ans[i]*((n-k+1-i)*(k-i)))/(i*(i+1)))%1000000007;
        }
        
    }
    for(int i=1;i<=k;i++){
        cout << ans[i] << endl;
    }
    return 0;
}