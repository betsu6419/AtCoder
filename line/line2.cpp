#include <iostream>
#include<vector>
#include <queue>
using namespace std;
int h;
int w;
char in[1000][1000];
int out[1000][1000];
queue<vector <int> >  q;
int x,y,g_x,g_y;
int ans = 0;
int direction = 0;//ue 0 migi 1 sita 2 hidari 3

void solve(int i,int j,int truei,int truej,int direction,int true_direction){
    //cout << "from" << truei << " " << truej<<endl;
    //cout << i << " "<< j << endl;
    if(direction !=true_direction){

        while(1){
            switch (true_direction)
            {
                case 0:i=i-1;break;
                case 1:j = j+1;break;
                case 2:i = i+1;break;
                case 3:j = j-1;break;
            }
        if(in[i][j] == '#' || i < 0 || j < 0 || i >= h || j >= w){
            vector<int> v(3,0);
            v[0] = truei;
            v[1] = truej;
            v[2] = true_direction;
            q.push(v);
            return;
        }
        else{
            out[i][j] = out[truei][truej];
            truei = i;
            truej = j;
        }
    }
}
    
    
    
    //cout << out[i-1][j-1] << endl;
  
}

int main(){
    cin >> h >> w;
     for(int i = 0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
            out[i][j] = -1;
            if(in[i][j] == 's'){
                x = i;
                y = j;
            }
            else if(in[i][j] == 'g'){
                g_x = i;
                g_y = j;
            }
        }
    }
    //cout << x << " " << y << " " << g_x << " " << g_y << endl;
    int a[] ={x,y,4}; 
    vector<int> b(a,a+2);
    q.push(b);
    out[x][y] = 0;
    while(!q.empty()){
        int k = q.front()[0];
        int l = q.front()[1];
        int d = q.front()[2];
        solve(k+1,l,k,l,d,2);
        solve(k-1,l,k,l,d,0);
        solve(k,l-1,k,l,d,3);
        solve(k,l+1,k,l,d,1);
        q.pop();
    }
    ans = out[g_x][g_y];
    /*for(int i=0;i<h;i++){
        for(int j =0;j<w;j++){
            cout << out[i][j];
        }
        cout << endl;
    }
    */
    cout << ans << endl;
}