#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> in(5,0);
    int i;
    for(i = 0;i<5;i++){
        cin >> in[i];
    }
    int last,min=99;
    vector<int> amari(5,0);
    for(i=0;i<5;i++){
        amari[i] = in[i]%10;
        if(amari[i] == 0){
            continue;
        }
        else if(min>amari[i]){
            min = amari[i];
            last = i;
        }
    }
    int sum = 0;
    for(i=0;i<5;i++){
        if(i ==last){
            sum += in[i];
        }
        else{
            if(in[i]%10 ==0){
                sum += in[i];
            }
            else{
                sum += (in[i]/10+1)*10;
            }
        }
    }
    cout <<sum << endl;
}