#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int odd[n],even[n];
    odd[0] = 0;
    even[0] = 0;
    for(int i=1;i<=n/2;i++){
        odd[i] = odd[i-1] + a[2*i-2];
        even[i] = even[i-1] + a[2*i-1];
    }
    if(n%2 == 1){
        odd[n/2+1] = odd[n/2] + a[n-1];
    }
    int t_max = 0;
    for(int i=0;i<n;i++){
        int a_max = 0;
        if(i%2 == 0){
            for(int j=0;j<i/2;j++){
                if(even[i/2]-even[j]>a_max){
                    a_max = even[i/2] - even[j];
                    t_max = odd[i/2+1]-odd[j];
                }
            }
            for(int j=i/2+1;j<=n/2+1;j++){
                if(even[j]-even[i/2]>a_max){
                    a_max = even[j]-even[i/2];
                    t_max = odd[j]-odd[i/2];
                }
            }
        }
        else{
            for(int j=0;j<i/2;j++){
                if(odd[])
            }
        }
    }
}