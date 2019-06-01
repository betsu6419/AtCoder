#include <iostream>
#include <queue>
#include<map>
#include<functional>
#include<utility>
#include<algorithm>
using namespace std;

int n;
int m;
priority_queue<int,vector<int >,greater<int> >a;
queue<int>bc;
int b[1000000];
int c[1000000];
long long ans=0;

bool my_greater(pair<int,int> a,pair<int,int> b){
    if(!(a.second==b.second)){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}
int main(){
    cin >> n >> m;
    vector<pair<int ,int > >p(m);
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push(tmp);
    }
    for(int i=0;i<m;i++){
        int tmp1,tmp2;
        cin >> tmp1 >>tmp2 ;
        p[i] = make_pair(tmp1,tmp2);
    }
    sort(p.begin(),p.end(),my_greater);
    for(int i=0;i<m;i++){
        for(int j=0;j<p[i].first;j++){
            bc.push(p[i].second);
        }
        if(bc.size() == n){
            break;
        }
    }
    while(!bc.empty()){
        if(a.top()>bc.front()){
            bc.pop();
        }
        else{
            a.pop();
            a.push(bc.front());
            bc.pop();
        }
    }
    while(!a.empty()){
        ans += a.top();
        //cout << a.top() << endl;
        a.pop();
    }
    cout << ans << endl;
}