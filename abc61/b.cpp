#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int c[n];
    memset(c,0,sizeof c);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        c[a-1] ++;
        c[b-1] ++;
    }
    for(int i=0;i<n;i++){
        cout << c[i] << endl;
        
    }
    return 0;
}