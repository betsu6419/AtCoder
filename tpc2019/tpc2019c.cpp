#include<iostream>
#include <queue>
using namespace std;

int main(){
    int n;cin >> n;
    char in[n];cin >> in;
    int ans = 1000000000;
    bool w = false;
    bool wf = false;
    bool we = false;
        if(in[0] == '.'){
        w = true;
        wf = true;
    }
    if(in[0] == '#'){
        w = false;
        wf = false;
    }
    int count = 1;
    queue<int> qw,qb;
   for(int i=1;i<n;i++){
       if(in[i] == '.'){
           if(w){
               count ++;
           }
           else{
               w = false;
               qb.push(count);
               count = 1; 
           }
       }
       else if(in[i] == '#'){
           if(w){
               w = false;
               qw.push(count);
               count = 1;
           }
           else{
               count ++;
           }
       }
   }
   if(w = true){
       qw.push(count);
       we = true;
   }
    else{
        qb.push(count);
        we = false;
    }
    if(wf){

    }
    cout << ans << endl;

    return 0;
}