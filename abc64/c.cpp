#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool color[8];
    int ra = 0;
    for(int i=0;i<8;i++){
        color[i] = false;
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a< 3200){
            color[a/400] = true;
        }
        else{
            ra ++;
        }
    }
    int Min,Max;
    int c = 0;
    for(int i=0;i<8;i++){
        if(color[i]){
            c ++;
        }
    }
    Min = max(c,1);
    Max = c+ra;
    cout << Min << " " <<  Max << endl;
    return 0;
}