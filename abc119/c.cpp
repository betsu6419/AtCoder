#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
vector <int> l;
vector <int> abc(3);
int dfs(int i,int a,int b,int c){
    if(i == n){
        if(min(a,min(b,c))==0){
            return 1000000000;
        }
        return abs(abc[0]-a) + abs(abc[1]-b) + abs(abc[2]-c)-30;
    }
    int opt1 = dfs(i+1,a,b,c);
    int opt2 = dfs(i+1,a+l[i],b,c)+10;
    int opt3 = dfs(i+1,a,b+l[i],c)+10;
    int opt4 = dfs(i+1,a,b,c+l[i])+10;
    return min(opt1,min(opt2,min(opt3,opt4)));
}

int main(){
    cin >>n;
    for(int i=0;i<3;i++){
        cin >> abc[i];
    }
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }
    int ans = 0;
    ans = dfs(0,0,0,0);
    cout << ans << endl;
    return 0;
}