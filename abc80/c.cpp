#include <iostream>

using namespace std;
    int p[100][11];
int main(){
    int n;
    cin >> n;
    int f[n][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            cin >> f[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<11;j++){
            cin >> p[i][j];
        }
    }
    int count[n];
    int ans = -1000000000;
    for(int i=1;i<1024;i++){
        //cout << int(i&f[0])<<endl;
        for(int j=0;j<n;j++){
            count[j] = 0;
        }
        for(int j=0;j<10;j++){
            for(int k=0;k<n;k++){

           // cout << int((i&j)&f[k]) << endl;
                if( ((i>>j)&1)&&f[k][j]){

                    //cout << "count[" << k << "] is" << count[k]<<endl;
                    count[k] ++;
                }
            }
        }
        //cout << count[0] << endl;
        int tmp=0;
        for(int j=0;j<n;j++){
            tmp += p[j][int(count[j])];
            /*cout << count[j]<<endl;
            cout << p[j][count[j]]<<endl;*/
        }
        if(tmp > ans){
            ans = tmp;
        }
    }
    cout << ans <<endl;return 0;
}