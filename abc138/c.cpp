#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int > v;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    double ans=(double)(v[0]+v[1])/(double)(2);
    for(int i=2;i<n;i++){
        ans = (double)(ans+v[i])/(double)(2);
    }
    printf("%.10lf\n",ans);
    return 0;
}