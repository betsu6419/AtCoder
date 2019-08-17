#include<iostream>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    int a[m];
    for(int i=0;i<m;i++){
        cin >> a[i]; 
    }
    int left=0;
    int right = 0;
    for(int i=0;i<m;i++){
        if(a[i]<x){
            left ++;
        }
        if(a[i]>x){
            right ++;
        }
    }
    cout << min(left,right) << endl;
    return 0;
}