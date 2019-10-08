#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cin >> n;
    int x[n];
    int y[n];
    int h[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i] >> h[i];
    }
    int l = 0;
    int ansx,ansy,ansh;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            while(h[l] == 0){
                l ++;
            }
            int H = abs(x[l]-i) + abs(y[l]-j) + h[l];
            for(int k=0;k<n;k++){
                if(max(H-abs(x[k]-i) -abs(y[k]-j),0) != h[k] ){
                    break;
                }
                if(k == n-1){
                    ansx = i;
                    ansy = j;
                    ansh = H;
                }
            }
        }
    }
    cout << ansx << " " << ansy << " " << ansh << endl;
    return 0 ;
}
