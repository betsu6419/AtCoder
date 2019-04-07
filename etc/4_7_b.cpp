#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long> a(n,0);
    
    int i;
    for(i = 0;i<n;i++){
        cin >> a[i];
    } 
    sort(a.begin(),a.end());
    long sum = 0;
    int j;
    for(j=0;j<k;j++){
        sum += a[j];
        sum += j;
    }
    cout << sum << endl;
}