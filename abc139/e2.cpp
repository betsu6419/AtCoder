#include<iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;

int main(){
    int n;cin >> n;
    vector<queue<int> > a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int tmp;cin  >> tmp;
            tmp --;
            a[i].push(tmp);
        }
    }
    queue<pair<int,int> > q;
    for(int i=0;i<n;i++){
        if(a[a[i].front()].front() == i){
            q.push(make_pair(i,a[i].front()));
        }
    }
    int count = 0;
    int day = 0;
    while(count < (n*(n-1))/2){
        if(q.empty()){
            cout << "-1" << endl;
            return 0;
        }
        int daygame = q.size();
        int daycount = 0;
        while(daycount < daygame){
            pair<int ,int> game;
            game = q.front();
            q.pop();
            if(a[game.first].front() != game.second || a[game.second].front() != game.first){
                daycount++;
                continue;
            }
            else{
                a[game.first].pop();
                a[game.second].pop();
                daycount ++;
                count ++;
                if(!a[game.first].empty()){
                    if(game.first == a[a[game.first].front()].front()){
                        q.push(make_pair(game.first,a[game.first].front()));
                    }
                }
                if(!a[game.second].empty()){
                    if(game.second == a[a[game.second].front()].front()){
                        q.push(make_pair(game.second,a[game.second].front()));
                    }
                }

            }
        }
        day ++;
    }
    cout << day << endl;
    return 0;
}