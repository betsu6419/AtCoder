#include <iostream>
using namespace std;
int h;
int w;
char s[3000][3000];
int L[3000][3000];
int R[3000][3000];
int D[3000][3000];
int U[3000][3000];
int main(){
    cin >> h >> w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j]; 
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j] == '#'){
                L[i][j] = 0;
            }
            else if(j==0){
                L[i][j] = 1;
            }
            else{
                L[i][j] = L[i][j-1] +1;
            }
        }

        for(int j=w-1;j>=0;j--){
            if(s[i][j] == '#'){
                R[i][j] = 0;
            }
            else if(j==w-1){
                R[i][j] = 1;
            }
            else{
                R[i][j] = R[i][j+1] +1;
            }
        }
    }

    for(int j=0;j<w;j++){
        for(int i=0;i<h;i++){
            if(s[i][j] == '#'){
                D[i][j] = 0;
            }
            else if(i==0){
                D[i][j] = 1;
            }
            else{
                D[i][j] = D[i-1][j] +1;
            }
        }
        for(int i=h-1;i>=0;i--){
            if(s[i][j] == '#'){
                U[i][j] = 0;
            }
            else if(i==h-1){
                U[i][j] = 1;
            }
            else{
                U[i][j] = U[i+1][j] +1;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int tmp = L[i][j]+R[i][j]+U[i][j]+D[i][j]-3;
            if(ans < tmp){
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}