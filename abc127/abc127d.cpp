#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 
#include<assert.h>
using namespace std;
int n;
int m;
vector<int> a;
long long a_sum[1000000];
int c[1000000];
int b[1000000];
int main(){
   
    cin >> n >> m;
    for(int i = 0;i<n; i++){
        int tmp;
        cin >>tmp ;
        a.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        cin >> b[i] >> c[i];
    }
    sort(a.begin(),a.end());

    a_sum[0] = a[0];
    for(int i=1;i<n;i++){
        a_sum[i] = a_sum[i-1]+a[i];
    }
    long long sum = 0;
    int max_i = 0;
    for(int i=0;i<n;i++){
        int max = a[i]; 
        for(int j=0;j<m;j++){
            if(b[j] >= (i+1) && max < c[j]){
                max = c[j];
            }
        } 
        sum += max-a[i];
        max_i = i; 
        if(max == a[i]){
            break;
        }
    }
    assert(sum >=0);
    long long ans = a_sum[n-1] + sum;
    cout << ans << endl;
}