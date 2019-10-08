#include<cmath>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[n],c[m],d[m];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<m;i++){
        cin >> c[i] >> d[i];
    }
    for(int i=0;i<n;i++){
        int tmp = 2000000000;
        int k;
        for(int j=0;j<m;j++){
            if(tmp > abs(a[i]-c[j])+abs(b[i]-d[j])){
                tmp = abs(a[i]-c[j])+abs(b[i]-d[j]);
                k  =j+1;
            }

        }
        cout << k << endl;
    }
    return 0;
}