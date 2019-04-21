#include <iostream>
#include <queue>
using namespace std;
int t;
int n;
queue<int> a;
int m;
queue<int> b;

int main(){
    cin >> t >> n;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        a.push(tmp);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> tmp;
        b.push(tmp);
    }
    //cout << "#####" << endl;
        bool ok = true;
    if(n<m){
        cout << "no" << endl;
        return 0;
    }
    int i=0;
    while(!b.empty()&&!a.empty()){
        int sub = b.front() - a.front();
        //cout << i << endl;
        //i++;
        if(sub <0){
            ok = false;
            break;
        }
        else if(sub <= t){
            a.pop();
            b.pop();
        }
        else{
            a.pop();
        }
        if(a.empty()&&!b.empty()){
            ok = false;
        }
    }
    if(ok){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}