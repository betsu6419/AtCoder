#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

long long rui(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    double d[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                d[i][j] = 0;
            }
            else{
                d[i][j] = sqrt((a[i] - a[j])*(a[i] - a[j]) + (b[i] - b[j])*(b[i]-b[j])  ); 
            }
        }
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    double sum = 0;
    do{
        for(int i=0;i<v.size()-1;i++){
            sum += (double)d[v[i]][v[i+1]];
          //  cout << v[i] << " " << v[i+1];
            //cout << sum << endl;
        }
    }while(next_permutation(v.begin(),v.end()));
    //cout << d[1][2] << endl;
    //cout << sum << endl;
    //cout << rui(n) << endl;
    double ans = (double)sum/(double)rui(n);
    cout << setprecision(20) << ans << endl;
    return 0;
}