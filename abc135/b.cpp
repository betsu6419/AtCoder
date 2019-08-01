#include<iostream>
using namespace std;

int n;
int p[50];
int check(int *p,int n){
    bool ans = true;
    for(int i=0;i<(n-1);i++){
        if(p[i] > p[i+1]){
            ans = false;
        }
    }
    return ans;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }    
    bool ans = false;
    if(check(p,n)){
        ans = true;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int tmp;
            tmp = p[i];
            p[i] = p[j];
            p[j] = tmp;
            if(check(p,n)){
                ans = true;
            }
            p[j] = p[i];
            p[i] = tmp;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}