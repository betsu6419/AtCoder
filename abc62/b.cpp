#include<iostream>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    char in[h+2][w+2];
    for(int i=0;i<w+2;i++){
        in[0][i] = '#';
        in[h+1][i] = '#';
    }
    for(int i=1;i<h+1;i++){
        in[i][0] ='#';
        for(int j=1;j<w+1;j++){
            cin >> in[i][j];
        }
        in[i][w+1] = '#';
    }

    for(int i=0;i<h+2;i++){
        for(int j=0;j<w+2;j++){
            cout << in[i][j];
        }
        cout << endl;
    }
    return 0;
}