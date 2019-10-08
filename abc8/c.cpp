#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    double ans = 0;
    for(int i=0;i<n;i++){
        int num = 0;
        //cout << ans << endl;
        for(int j=0;j<n;j++){
            if(i == j) continue;
            if(a[i]%a[j]== 0)num++;
        }
        if(num %2 == 1){
            ans += (double)(0.5);
        }
        else{
            ans += (double)(num + 2)/(double)(2*num + 2);
        }
    }
    printf("%.10lf\n",ans);
    return 0;
}