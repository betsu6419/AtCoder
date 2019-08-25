#include<iostream>
#include<string>
using namespace std;
int main(){
    int din,win;
    cin >> din >> win;
    if(0<=win && win <15 ){
        cout << "C" << " " << 0 << endl;
        return 0;
    }
    string d[16] = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
    din = (10*din+1125)%36000;
    for(int i=0;i<16;i++){
        if(0 <= din && din < 2250){
            cout << d[i] << " ";
            break;
        }
        din -= 2250;
    }
    int w[12] = {15,93,201,327,477,645,831,1029,1245,1467,1707,1959};
    int ans = 0;
    for(int i=0;i<11;i++){
        if(w[i] <= win && win < w[i+1]){
            ans = i+1;
        }
    }
    if(1959 <=win){
        ans = 12;
    }
    cout << ans << endl;
    return 0;
}