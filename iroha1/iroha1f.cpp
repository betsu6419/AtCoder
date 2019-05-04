#include<iostream>
#include<queue>
using namespace std;

int n;
int k;
queue<int> q;

int main(){
    cin >>n >> k;
    int ans = 1;
    bool sw = true;
    if(n == 1){
        q.push(1);
        sw = false;
    }
    else if(k == 1){
        q.push(n);
        sw = false;
    }
    while(sw){
        for(int i=2;i<=n;i++){
            if(n%i == 0){
                q.push(i);
                n = n/i;
                if((n == 1) || (q.size()==(k-1))){
                    sw = false;
                }
                break;
            }
        }
    }
    if((n != 1)&&(k!=1)){
        q.push(n);
    }
    if(q.size() == k){
        while(!q.empty()){
            cout << q.front() << " ";
             q.pop();
        }
        cout << endl;
        return 0;
    }
    else{
        cout << "-1" << endl;
        return 0;
    }
}