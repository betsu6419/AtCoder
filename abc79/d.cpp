#include<iostream>
#include<queue>
#include<tuple>
using namespace std;
typedef long long ll;
int main(){
    ll h; cin >> h;
    ll w;cin >> w;
    ll cost[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> cost[i][j];
            
        }
    }
    ll grid[10];
    for(int i=0;i<10;i++){
        grid[i] = 0;
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ll tmp;cin >> tmp;
            if(tmp >=0){
                grid[tmp]++;
            }
        }
    }
    ll d[10];
    bool fin[10];
    for(int i=0;i<10;i++){
        fin[i] = false;
    }
    d[1] = 0;
    fin[1] = true;
    priority_queue <tuple<ll,ll,ll>> q;
    for(int i=0;i<10;i++){
        if(i == 1)continue;
        q.push(make_tuple((-1)*cost[i][1],i,1));
    }
    while(!q.empty()){
        tuple<ll,ll,ll> now = q.top();
        #if TEST
            cout << get<0>(now) << " " << get<1>(now) << " " << get<2>(now)<<endl;
        #endif
        q.pop();
        if(!fin[get<1>(now)]){
            fin[get<1>(now)] = true;
            d[get<1>(now)] = -get<0>(now);

        #if TEST
            cout << get<1>(now) << " " << d[get<1>(now)]<<endl; 
        #endif
            for(int i=0;i<10;i++){
                if(get<1>(now) == i)continue;
                if(fin[i])continue;
                q.push(make_tuple((-1)*(cost[i][get<1>(now)]+d[get<1>(now)]),i,get<1>(now)));
            }
        }
    }
    ll ans = 0;
    for(int i=0;i<10;i++){
        if(i == 1)continue;
        ans += d[i]*grid[i];
    }
    cout << ans << endl;
}