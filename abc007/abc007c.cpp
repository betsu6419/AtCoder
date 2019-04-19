#include <iostream>
#include<vector>
#include <queue>
using namespace std;
int r;
int c;
char in[100][100];
int out[100][100];
queue<vector <int> >  q;
int x,y,g_x,g_y;
int ans = 0;
 vector<int> v(2,0);
void solve(int i,int j,int truei,int truej){
    //cout << "from" << truei << " " << truej<<endl;
    //cout << i << " "<< j << endl;
    if(in[i-1][j-1] == '#'){
        //cout << '#' << endl;
        return;
    }
    if(out[i-1][j-1] != -1 || (i==x&&y==j)){
        //cout << "もうみた"<<endl;
        return;
    }
    out[i-1][j-1] = out[truei-1][truej-1] + 1;
    //cout << out[i-1][j-1] << endl;
   v[0] = i;
   v[1] = j;
    q.push(v);
}
int main(){
    cin >> r >> c;
      cin >> x >> y;
    cin >> g_x >> g_y;
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> in[i][j];
            out[i][j] = -1;
        }
    }
  
    q.push(vector<int> (x,y));
    out[x-1][y-1] = 0;
    while(!q.empty()){
        int k = q.front()[0];
        int l = q.front()[1];
        solve(k+1,l,k,l);
        solve(k-1,l,k,l);
        solve(k,l-1,k,l);
        solve(k,l+1,k,l);
        q.pop();
    }
    ans = out[g_x-1][g_y-1];
    /*for(int i=0;i<r;i++){
        for(int j =0;j<c;j++){
            cout << out[i][j];
        }
        cout << endl;
    }
    */
    cout << ans << endl;
}