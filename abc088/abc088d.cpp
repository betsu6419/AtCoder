#include <iostream>
#include <queue>
#include<cassert>
using namespace std;
int h;
int w;
int numb = 0;
char in[50][50];
int out[50][50] = {};
queue<int> q;

void solve(int i,int j,int truei,int truej){
    //cout << "from " << truei << " " << truej << endl;
    //cout <<"to" <<  i << " " << j << endl;
    if(i<=0 || j <= 0 || i > h || j > w){
        return;
    }
    if(out[i-1][j-1] != -1){
        return;
    }
    if(in[i-1][j-1] == '#'){
        return;
    }
    out[i-1][j-1] = out[truei-1][truej-1] +1;
    q.push(i*100 + j);
    return;
}
int main(){
    cin >> h >> w;
    numb = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
            out[i][j] = -1;
            if(in[i][j] == '#'){
                numb ++;
            }
        }
    }
    out[0][0] = 0;
    q.push(101);
    while(!q.empty()){
        int n = q.front();
        int i = n/100;
        int j= n%100;
        solve(i,j-1,i,j);
        solve(i,j+1,i,j);
        solve(i-1,j,i,j);
        solve(i+1,j,i,j);
        q.pop();
    }
    /*for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << out[i][j];
        }
        cout << endl;
    }*/
    int ans = w*h - out[h-1][w-1]- numb-1;
    if(out[h-1][w-1] != -1){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}