#include<iostream>
using namespace std;

int main(){
    int w,h,n;
    cin >> w >> h >> n;
    char c[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            c[i][j] = '.';
        }
    }

    for(int k=0;k<n;k++){
        int x,y,a;
        cin >> x >> y >> a;
        switch (a)
        {
            case 1:
                for(int i=0;i<h;i++){
                    for(int j=0;j<x;j++){
                        c[i][j] = '#';
                    }
                } 
                break;
            case 2:

                for(int i=0;i<h;i++){
                    for(int j=x;j<w;j++){
                        c[i][j] = '#';
                    }
                } 
                break;
            case 3:

                for(int i=0;i<y;i++){
                    for(int j=0;j<w;j++){
                        c[i][j] = '#';
                    }
                } 
                break;
            case 4:

                for(int i=y;i<h;i++){
                    for(int j=0;j<w;j++){
                        c[i][j] = '#';
                    }
                } 
                break;
            default:
                break;
        }
    }
    int ans = h*w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            //cout << c[i][j];
            if(c[i][j] == '#'){
                ans --;
            }
        }
        //cout << endl;
    }
    cout << ans << endl;
    return 0;
}