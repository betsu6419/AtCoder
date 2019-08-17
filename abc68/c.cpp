#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<bool> a(n,false);
    bool ans = false;
    for(int i=0;i<m;i++){
        int tmp1 ,tmp2;
        cin >> tmp1>>tmp2;
        if(tmp1 ==1){
            if(a[tmp2-1]){
                ans = true;
            } 
            a[tmp2-1]= true;
        }

        if(tmp2 ==1){
            if(a[tmp1-1]){
                ans = true;
            } 
            a[tmp1-1]= true;
        }
        if(tmp1 ==n){
            if(a[tmp2-1]){
                ans = true;
            } 
            a[tmp2-1]= true;
        }

        if(tmp2 ==n){
            if(a[tmp1-1]){
                ans = true;
            } 
            a[tmp1-1]= true;
        }
    }

    if(ans){
        cout << "POSSIBLE" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}