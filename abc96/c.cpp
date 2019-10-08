#include<iostream>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    char in[h+2][w+2];
    for(int j=0;j<w+2;j++){
        in[0][j] = '.';
        in[h+1][j] = '.';
    }
    for(int i=1;i<h+1;i++){
        in[i][0] = '.';
        for(int j=1;j<w+1;j++){
            cin >> in[i][j];
        }
        in[i][w+1] = '.';
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(in[i][j] == '#'){
                if(in[i][j-1]=='.'&&in[i][j+1]=='.'&&in[i-1][j]=='.'&&in[i+1][j] == '.'){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}