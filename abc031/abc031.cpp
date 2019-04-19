#include <iostream>
using namespace std;
char in[10][10];
bool check[10][10];
int sum = 0;

void solve(int i,int j){
    if(i<0 || j < 0 || i >= 10 || j >= 10){
        return;
    }
    if(in[i][j]=='x'){
        return;
    }
    if(check[i][j] == true){
        return;
    }
    check[i][j] =true;
    //cout << i << " " << j << endl;
    solve(i-1,j);
    solve(i+1,j);
    solve(i,j-1);
    solve(i,j+1);
    return;
}

int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> in[i][j];
            if(in[i][j] == 'o'){
                sum ++;
            } 
        }
    }
    sum ++;
    bool flag = false;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(in[i][j] == 'o'){
                continue;
            }
            else{
                in[i][j]= 'o';

                for(int k=0;k<10;k++){
                    for(int l=0;l<10;l++){
                        check[k][l] = false;
                    }
                }
                solve(i,j);
                int tsum = 0;
                for(int k = 0;k<10;k++){
                    for(int l = 0;l<10;l++){
                        if(check[k][l] == true){
                            tsum ++;
                        }
                    }
                }
                in[i][j] = 'x';
                if(tsum == sum){
                    flag = true;
                    for(int k=0;k<10;k++){
                        for(int l;l<10;l++){
                           // cout <<k << " " << l << "is" <<check[k][l]<<endl;
                        }
                    }
                }
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}