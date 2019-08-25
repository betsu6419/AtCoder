#include<iostream>
using namespace std;
int main(){
    int h,w,k;
    cin >> h >> w >> k;
    char s[h+100][w+100];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }    
    int u[h][w];
    int d[h][w];
    int r[h][w];
    int l[h][w];
    for(int i=0;i<h;i++){
        if(s[i][0] =='x'){
                l[i][0] = -1;
            }
            else{
                l[i][0] =0; 
            }
    }
    for(int i=0;i<h;i++){
        for(int j=1;j<w;j++){
            if(s[i][j] =='x'){
                l[i][j] = -1;
            }
            else{
                l[i][j] = l[i][j-1] + 1;
            }
        }
    }

    for(int i=0;i<w;i++){
        if(s[i][w-1] =='x'){
                r[i][w-1] = -1;
            }
            else{
                r[i][w-1] =0; 
            }
    }
    for(int i=0;i<h;i++){
        for(int j=2;j<=w;j++){
            if(s[i][w-j] =='x'){
                r[i][w-j] = -1;
            }
            else{
                r[i][w-j] = r[i][w-j+1] + 1;
            }
        }
    }

    for(int i=0;i<w;i++){
        if(s[0][i] =='x'){
                d[0][i] = -1;
            }
            else{
                d[0][i] =0; 
            }
    }
    for(int j=0;j<w;j++){
        for(int i=1;i<h;i++){
            if(s[i][j] =='x'){
                d[i][j] = -1;
            }
            else{
                d[i][j] = d[i-1][j] + 1;
            }
        }
    }
      

    for(int i=0;i<w;i++){
        if(s[h-1][i] =='x'){
                u[h-1][i] = -1;
            }
            else{
                u[h-1][i] =0; 
            }
    }
    for(int j=0;j<w;j++){
        for(int i=2;i<=h;i++){
            if(s[h-i][j] =='x'){
                u[h-i][j] = -1;
            }
            else{
                u[h-i][j] = u[h-i+1][j] +1;
            }
            
        }
    }
    /*
    cout << "r" << endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << r[i][j] << " ";
        }
        cout << endl;
    }

    cout << "l" << endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << l[i][j] << " ";
        }
        cout << endl;
    }
    cout << "u" << endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << u[i][j] << " ";
        }
        cout << endl;
    }
    cout << "d" << endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }*/
    int ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(i-(k-1)<0 || j+(k-1) >=w || j-(k-1) < 0 || i +(k-1)>=h){
                continue;
            }
            if(u[i][j] >=k-1 && d[i][j] >= k-1 && l[i][j] >= k-1 && r[i][j] >= k-1){
                bool sw=true;
                for(int l=1;l<=k-1;l++){
                    if(j-l<0 || j+l >=w){
                        sw = false ;
                        break;
                    }
                    if(!(u[i][j-l] >= k-1-l&&d[i][j-l] >= k-1-l && u[i][j+l] >= k-1-l && d[i][j+l] >= k-1-l)){
                        sw = false;
                        break;
                    }
                }
                if(sw){
                    ans ++;
                    //cout << i << " " << j << endl;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}