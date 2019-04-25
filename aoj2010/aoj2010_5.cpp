#include <iostream>
#include <queue>
#include <cassert>
using namespace std;
int h;
int w;
int n;
int ans;
char start;
char goal;
queue<int> q;
char in[1000][1000];
int out[1000][1000];
int where[10];
void solve2(int i,int j,int truei,int truej){
    if(i < 0||j<0||i>=h || j >= w){
        return;
    }
    if(in[i][j] == 'X'){
        return;
    }
    if(out[i][j] != -1){
        return;
    }
    out[i][j] = out[truei][truej] + 1;
    q.push(i*10000+j);
}
void solve(char start,char goal){
    int start_n;
    int goal_n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            out[i][j] = -1;
            if(in[i][j] == start){
                start_n = i*10000+j;
            }
            if(in[i][j] == goal){
                goal_n = i*10000+j;
            }
        }
    }
    assert(q.empty());
    q.push(start_n);
    int k = start_n/10000;
    int l = start_n%10000;
    out[k][l] = 0;
    while(!q.empty()){
        int i = q.front()/10000;
        int j = q.front()%10000;
        solve2(i-1,j,i,j);
        solve2(i+1,j,i,j);
        solve2(i,j-1,i,j);
        solve2(i,j+1,i,j);
        q.pop();
    }
    int i = goal_n/10000;
    int j = goal_n%10000;
    ans += out[i][j];
}
int main(){
    cin >> h >> w >> n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
        }
    }
    ans = 0;
    for(int i =0;i<n;i++){
        if(i == 0){
            start = 'S';
            goal = '1';
        }
        else{
            start = '0' + i;
            goal = '1' + i;
        }
        solve(start,goal);
    }
    cout << ans << endl;
}