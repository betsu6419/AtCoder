#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin >> a[i][j];
            a[i][j] --;
        }
    }
    int index[n];
    for(int i=0;i<n;i++){
        index[i] = 0;
    }
    bool end = false;
    bool visited[n];
    int ans = 0;
    bool sw = false;
    while(!end){
        queue<int> q;
        //cout << "ans=" << ans << endl;
        sw = false;
        for(int i=0;i<n;i++){
            if(index[i] <n-1){
                q.push(i);
            }
            visited[i] = false;
        }
        while(!q.empty()){
            int now = q.front();

            //cout << "now=" << now << endl;
            q.pop();
            int tmp = a[now][index[now]];
            if(now == a[tmp][index[tmp]]){
                visited[now] =true;
                visited[tmp] =true;
                sw = true;
            }
        }

        if(!sw){
            cout << "-1" << endl;
            return 0;
        }

        end = true;
        for(int i=0;i<n;i++){
            if(visited[i]){
                index[i] ++;
            }
            if(index[i] < n-1){
                end = false;
            }
        }
        ans ++;
    }
    cout << ans << endl;
    return 0;
}