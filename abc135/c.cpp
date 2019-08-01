#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a[1000000];
int b[1000000];
long long ans;

int main(){
    cin >> n;
    for(int i=0;i<(n+1);i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ans = 0;
    int diff =0;
    for(int i=0;i<n;i++){
        ans += min(a[i],b[i]+diff);
        int c = a[i]-diff;
        if(c<0){
            c = 0;
        }
        diff = b[i] - c;
        if(diff<0){
            diff = 0;
        } 
    }
    ans += min(a[n],diff);
    cout << ans <<endl;
    return 0; 
}