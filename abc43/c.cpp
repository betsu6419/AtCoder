#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 100000000;
    int a[n];
    int min = 100000;
    int max = -100000;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    for(int j=min;j <= max;j++){
        int tmp = 0;
        for(int i=0;i<n;i++){
            tmp += (a[i]-j)*(a[i]-j);
        }
        if(ans > tmp) {
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}