#include <iostream>
using namespace std;
typedef long long LL;
LL sum[1000000];
int a[1000000];
int n;
LL k;
LL ans= 0;
int main(){
    cin >> n >> k;
    sum[0] = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum[i+1] = a[i] + sum[i]; 
        //cout << "sum[" << i << "]=" << sum[i] << endl;
    }
          //  cout << "sum[" << n << "]=" << sum[n] << endl;

    int left = 0;
    int right = 1;
    bool move_right = true;
    while(right<=n && left <= n){
        LL diff = sum[right] - sum[left];
        if(move_right){
            if(diff >= k){
                ans += n-right +1;
                move_right = false;
                left += 1;
            }
            else if(diff<k && right==n){
                break;
            }
            else{
                right += 1;
            }
        }
        else{
            if(diff<k || left == right ){
                move_right = true;
                right += 1;
            }
            else if(diff >= k){
                ans += n-right+1;
                left += 1;
            }
        }
        //cout << "right =" << right << "left = " << left << endl;
    }

    cout << ans << endl;
    return 0;
}