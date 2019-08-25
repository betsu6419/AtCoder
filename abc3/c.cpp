#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    double ans = 0;
    for(int i = a.size()-k;i<a.size();i++){
        ans = (double)(ans+a[i])/(double)2;
    }
    printf("%.10lf\n",ans);
    return 0;
}