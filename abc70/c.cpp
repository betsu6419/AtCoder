#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long gcd(long long a,long long b){
    if(a<b){
        long long tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    while(b !=0){
        long long tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<long long> t;
    for(int i=0;i<n;i++){
        long long tmp;
        cin >> tmp;
        t.push_back(tmp);
    }
    if(n == 1){
        cout << t[0] << endl;
        return 0;    
    }
    else{
        long long a= t[0]*(t[1]/gcd(t[0],t[1]));
        for(int i=2;i<t.size();i++){
            a = a*(t[i]/gcd(a,t[i]));

        }
        cout << a << endl;
        return 0;
    }
}