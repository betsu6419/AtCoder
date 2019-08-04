#include <iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;
int a[1000];
int n;
int k;
LL sum;
int main(){
    cin >> n >> k;
    sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    int Max = 1;
    for(int i=sqrt(sum);i>0;i--){
        if(sum%i == 0){
            vector <int> surplus; 
            int s_sum =0 ;
            for(int j=0;j<n;j++){
                surplus.push_back(a[j]%i); 
                s_sum += a[j]%i;
            }
            
            int ans = 0;
            sort(surplus.begin(),surplus.end());
            for(int j=n-1;j>=0;j--){
                if(s_sum == 0){
                    break;
                } 
                s_sum -= i;
                ans +=(i-surplus[j]);
                
            }
            if(ans <= k){
                Max = max(Max,i);
               // cout << "i=" << i <<endl;
            }
            
            int ii = sum/i;
            //cout << ii << endl;
            vector <int> surplus2; 
            int s_sum2 =0 ;
            for(int j=0;j<n;j++){
                surplus2.push_back(a[j]%ii); 
                s_sum2 += a[j]%ii;
            }
        
            int ans2 = 0;
            sort(surplus2.begin(),surplus2.end());
            for(int j=n-1;j>=0;j--){
                if(s_sum2 == 0){
                    break;
                }
                s_sum2 -= ii;
                ans2 +=(ii-surplus2[j]);
                //cout << "ii=" << ii << "s_sum2 = " << s_sum2 << "ans2 = " << ans2 << endl;
                 
            }
            if(ans2 <= k){
                Max = max(Max,ii);
               // cout << "ii=" << ii <<endl;
            }

        }
    }
    cout << Max << endl;
    return 0;
}