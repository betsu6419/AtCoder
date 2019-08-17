#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
    int tmp;
    if(b>a){
        tmp = a;
        a = b;
        b = tmp;
    }
    while(b != 0){
        tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> in(n);
    for(int i=0;i<n;i++){
        cin >> in[i];
        in[i] = abs(in[i] - x);
    }
    int ans = (n==1)?in[0]:gcd(in[0],in[1]);

    for(int i=2;i<n;i++){
        ans = gcd(ans,in[i]);
    }
    cout << ans << endl;
    return 0;
}