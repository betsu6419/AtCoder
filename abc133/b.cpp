#include<iostream>
using namespace std;

int in[10][10];
int sqr[150];
int main(){
    int n;
    int d;
    cin >>n >> d;
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
             cin >> in[i][j];
        }
    }
    for(int i=1;i<150;i++){
        sqr[i] = i*i;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int k=(i+1);k<n;k++){
            int sum = 0;
            for(int j=0;j<d;j++){
                sum += (in[i][j]-in[k][j])*(in[i][j] - in[k][j]);
            }
            for(int l = 1;l<150;l++){
                if(sum == sqr[l]){
                    ans ++;
                    break;
                }
            }

        }
    }
    cout << ans << endl;
    return 0;
}