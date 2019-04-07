#include<iostream>

using namespace std;

bool calc(int *a,int *b,int m,int c){
    int i,sum = 0;
    for(i=0;i<m;i++){
        sum += (*(a+i))*(*(b+i));
    }
    sum = sum+ c;
    return sum > 0;    
}
int main(){
    int n , m , c,ans = 0;
    cin >> n >> m >> c;
    int b[m],a[m];
    int i,j;
    for(i=0;i<m;i++){
        cin >> b[i];
    }
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            cin >> a[i];
        }
        if(calc(a,b,m,c) == true){
            ans ++;
        }
    }
    cout << ans;
}