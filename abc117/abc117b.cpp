#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >>n;
    bool ans=false;
    int buf,max,sum=0;
    max = 0;
    for(int i=0;i<n;i++){
        cin>>buf;
        sum += buf;
        if(max<buf){
            max = buf;
        }
    }
    if(sum>max*2){
        ans = true;
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{

        cout << "No" << endl;
    }
}