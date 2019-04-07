#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long N;
    cin >> N;
    long h,n,w;
    long ans_h,ans_n,ans_w;
    long tmp;
    for(h =1;h<3500;h++){
        for(n =1;n<h;n++){
            for(w =1;w<n;w++){
                tmp = 4*h*n*w;
                if(tmp%N != 0){
                    continue;
                }
                else if(tmp/N == h*w+n*h+w*n){
                    cout << h << " "<< n << " " << w << endl;
                    return 0;
                }

            }
        }
    }
}