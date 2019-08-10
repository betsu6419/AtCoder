#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int odd[1000000];
    int even[1000000];
    for(int i=0;i<1000000;i++){
        odd[i] = 0;
        even[i] = 0;
    }
    for(int i=0;i<n/2;i++){
        int tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        odd[tmp1]++;
        even[tmp2]++;
    }
    int max_odd=0,smax_odd =0,max_even = 0,smax_even = 0;
    int i_odd,si_odd,i_even,si_even;
    for(int i=1;i<100001;i++){
        if(max_odd <= odd[i]){
            smax_odd = max_odd;
            max_odd = odd[i];
            i_odd = i;
        }
        else if(smax_odd <= odd[i]){
            smax_odd = odd[i];
        }
        if(max_even <= even[i]){
            smax_even = max_even;
            max_even = even[i];
            i_even = i;
        }
        else if(smax_even <= even[i]){
            smax_even = even[i];
        }
    }
    if(i_odd == i_even){
        if(max_odd+smax_even <= max_even+smax_odd){
            max_odd = smax_odd;
        }
        else{
            max_even = smax_even;
            
        }
    }

    cout << n-max_even - max_odd << endl;
    return 0;
}