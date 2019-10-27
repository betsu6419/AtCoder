#include<iostream>
#include<queue>
using namespace std;

int main(){
    int h,w,n;cin >> h >> w >> n;
    queue<int> q;
    int ans[h][w];
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        for(int j=0;j<c;j++){
            q.push(i+1);
        }   
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int now = q.front();
            #if TEST
                cout << now << endl;
            #endif
            q.pop();
            if(i%2 == 0){
                ans[i][j] =  now;
            }    
            else{
                ans[i][w-1-j] = now;
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << ans[i][j];
            if(j == w-1){
                cout <<endl;
            }
            else{
                cout << " " ;
            }
        }
    }
    return 0;
}