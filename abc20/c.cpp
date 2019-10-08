#include<iostream>
#include<queue>
#include<tuple>
#include<vector>
#include<string>
using namespace std;
typedef long long ll;
typedef tuple<ll,ll,ll> T;
const ll INF = 1e15;

ll dx[4] = {1,0,-1,0};
ll dy[4] = {0,1,0,-1};

ll h,w,t;
char s[110][110];
ll sx,sy;
ll gx,gy;
ll d[110][110];

bool dijkstra(ll x){
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            d[i][j] = INF;
        }
    }
    priority_queue<T,vector<T>,greater<T> > que;
    que.push(T(0,sx,sy));
    d[sx][sy] = 0;
    while(!que.empty()){
        ll pc,px,py;
        tie(pc,px,py) = que.top();
        que.pop();
        for(int i=0;i<4;i++){
            ll nx = px+dx[i];
            ll ny = py + dy[i];
            if(!(0 <= nx && nx < h && 0 <= ny && ny < w))continue;
            ll cost;
            if(s[nx][ny] == '#'){
                cost = x;
            }
            else{
                cost = 1;
            }
            if(d[nx][ny] > pc + cost){
                d[nx][ny] = pc + cost;
                que.push(T(pc+cost,nx,ny));
            }
        }
    }
    if(d[gx][gy] <= t){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cin >> h >> w >> t;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
            if(s[i][j] == 'S'){
                sx = i;
                sy = j;
                continue;
            }
            if(s[i][j] == 'G'){
                gx = i;
                gy = j;
                continue;

            }
        }
    }
    ll lb = 1;ll ub = 1e10;
    ll mid;
    while(ub-lb > 1){
        mid = (lb+ub)/2;
        if(dijkstra(mid)){
            lb = mid;
        }
        else{
            ub = mid;
        }
    }
    cout << lb << endl;
    return 0;
}

