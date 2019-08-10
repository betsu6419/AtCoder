#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector <int> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    sort(h.begin(),h.end());
    int min = 2000000000;
    for(int i=0;i<=n-k;i++){
        if(min > (h[i+k-1] - h[i])){
            min = h[i+k-1] - h[i];
        }    
    }
    cout << min << endl;
    return 0;
}