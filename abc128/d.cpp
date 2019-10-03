#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int n;
int k;
vector <int> v;
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    //cout << "aaaa" << endl;
    int ans = 0;
    int a_max = min(n,k);
    for(int a=0;a<=a_max;a++){
        for(int b=0;b<=a_max-a;b++){

            vector <int> out;
          // cout << a << " " << b <<endl;
            int sum = 0;
            for(int i=0;i<a;i++){

               // cout << "v" << i << "=" << v[i]<<endl;
                sum += v[i];
                out.push_back(v[i]);
               }
            for(int i =0;i<b;i++){

               // cout << "v" << n-i-1 << "=" << v[n-i-1]<<endl;
                sum += v[n-i-1];
                out.push_back(v[n-i-1]);
            }

            sort(out.begin(),out.end());
           
            for(int i=0;i<min((k-a-b),(int)out.size());i++){
                if(out[i]<0){
                      //cout << "out"<<i << "=" << out[i]<< endl;

                    sum -=out[i];
                }
                else{
                    break;
                }
            }
          //  cout << "a=" << a << "b=" << b << "sum=" << sum << endl;
            if(sum > ans){
                ans = sum;
            }
        }
    }
    cout << ans << endl;
    return 0;
}