#include<iostream>
using namespace std;

int main(){
    int h,w,a,b;
    cin >> h >> w >> a >>b;
    int ans[1000][1000];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ans[i][j] = 0;
        }
    }
    for(int i=0;i<b;i++){
       for(int j=0;j<a;j++){
            ans[i][j] = 1;
        }
    }
    for(int i=b;i<2*b;i++){
        for(int j=a;j<2*a;j++){
            ans[i][j] = 1;
        }
    }
    for(int i=0;i<b;i++){
        for(int j=a;j<2*a;j++){
            ans[i][j] = 0;
        }
    }
    for(int i=b;i<2*b;i++){
        for(int j = 0;j<a;j++){
            ans[i][j] = 0;
        }
    }
    int i = 2*b;
    int j=2*a;
    while(i < h && j < w){
        if(i < h){
            for(int k = 0;k<j;k++){
                ans[i][k] = ans[i-1][k];
            }
        }
        if(j < w){
            for(int k = 0;k<i;k++){
                ans[k][j] = ans[k][j-1];
            }
        }
        ans[i][j] = ans[i-1][j-1];
        if(i < h){
            i++;
        }
        if(j < w){
            j++;
        }
    }
    for(int q=0;q<h;q++){
        for(int r=0;r<w;r++){
            cout << ans[q][r];
        }
        cout << endl;
    }
    return 0;
}