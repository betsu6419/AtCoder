#include<iostream>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    char s[h+2][w+2];
    char ans[h][w];
    for(int i=0;i<w+2;i++){
        s[0][i] = '.';
        s[h+1][i] = '.';
    }
    for(int i=0;i<h+2;i++){
        s[i][0] = '.';
        s[i][w+1] = '.';
    }
    for(int i=1;i<h+1;i++){
        for(int j=1;j<w+1;j++){
        cin >> s[i][j];
        }
    }
    for(int i=1;i<h+1;i++){
        for(int j=1;j<w+1;j++){
            if(s[i][j] == '#'){
                ans[i-1][j-1] = '#';
                continue;
            }
            int tmp = 0;
            for(int k = -1;k<2;k++){
                for(int l = -1;l<2;l++){
                    if(s[i+k][j+l] == '#'){
                        tmp ++;
                    }
                }
            }
            ans[i-1][j-1] = tmp+'0';
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}