#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
typedef long long ll;
ll way[400][400];
int main(){
    ll n;cin >> n;
    ll m;cin >> m;
    ll l;cin >> l;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            way[i][j] = -1;
        }
    }
    for(int i=0;i<m;i++){
        ll a,b,c;cin >> a >> b >>c;
        way[a-1][b-1] = c;
        way[b-1][a-1] = c;
    }
    ll q;cin >> q;
    pair<ll,ll> d[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                d[i][j] = make_pair(0,l);
            }
            if(way[i][j] != -1){
                if(way[i][j] > l){
                    d[i][j] = make_pair(5000,-1);
                }
                else{
                    d[i][j] = make_pair(0,l-way[i][j]);
                } 
            }
            else{
                d[i][j] = make_pair(5000,-1);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k = 0;k<n;k++){
                ll fir; 
                ll sec;
                if(d[i][k].first == 0 && d[j][i].second - (l-d[i][k].second) >=0){
                    fir = d[j][i].first;
                    sec = d[j][i].second - (l-d[i][k].second);
                }
                else{
                    fir = d[j][i].first + d[i][k].first+1;
                    sec = d[i][k].second;
                }
                if(d[j][k].first >fir || (d[j][k].first == fir && d[j][k].second < sec)){
                    d[j][k].first = fir;
                    d[j][k].second = sec; 
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        ll s,t;
        cin >> s >> t;
        s --;t--;
        if(d[s][t].first == 5000){
            cout << -1 << endl;
        }
        else{
            cout << d[s][t].first << endl;
        }
    }
    return 0;
}