#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,x,y;
    cin >> n >> m >> x >>y;
    vector<int> vx(n),vy(m);
    int maxx = -1000;
    int miny = 1000;
    for(int i =0;i<n;i++){
        cin >> vx[i];
        if(vx[i]>maxx){
            maxx = vx[i];
        }
    }
    for(int i=0;i<m;i++){
        cin >> vy[i];
        if(vy[i] < miny){
            miny = vy[i];
        }
    }
    //cout << maxx << " " << miny << endl;
    if((miny-maxx)>0&&(miny <= y) && (maxx >= x)){
        cout << "No ";
    }
    cout << "War" << endl;

}