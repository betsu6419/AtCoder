#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        int a_max = -100000000;
        int t_max = -100000000;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                int t=0;int a=0;
                for(int k=min(i,j);k<=max(i,j);k++){
                    if((k-min(i,j))%2 == 0){
                        t +=b[k];
                    }
                    else{
                        a +=b[k] ;
                    }
                }
                if(a>a_max){
                    a_max = a;
                    t_max = t;
                }
            }
        }
        v.push_back(t_max);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout << v[0] << endl;
    return 0;
}