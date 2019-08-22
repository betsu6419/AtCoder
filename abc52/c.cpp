#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long  n;
    long long  ans=1;
    cin >> n;
    for(long long  i=2;i<=n;i++){
        for(long long k =2;k<=i;k++){
            if(k == i){
                long long sum  =0;
                for(long long j=1;(long long)pow(i,j) <= n;j++){        
                    long long  count = 1;
                    long long num = (long long)pow(i,j);
                    long long tmp = num; 
                    while(tmp<=n){
                        count ++;
                        tmp = num * count;
                    }
                    sum += count -1;   
                }
                ans = (ans*(long long)(sum +1))%(long long )(1000000007);
               // cout <<"i=" << i <<  "ans=" << ans<<endl;
            }
            else if(i%k == 0){
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}