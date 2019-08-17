#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count4 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a%4 == 0){
            count4 ++;
        }
        else if(a%2==0){
            count2++;
        }
    }
    if(count4 >=n/2 ){
        cout << "Yes" << endl;

    }
    else if(n-count4*2<=count2){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}