#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int x,y,z,k;
    cin >> x >> y >> z >> k;
    vector<long> a(x),b(y),c(z);
    int i,j;
    for(i=0;i<x;i++){
        cin >> a[i];
    }
    for(i=0;i<y;i++){
        cin >> b[i];
    }
    for(i=0;i<z;i++){
        cin >> c[i];
    }
    vector<long> ab;
    //vector<long>::iterator iter_ab;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            long tmp = a[i] + b[j];
            ab.push_back(tmp);
        }
    }
    sort(ab.begin(),ab.end());
    reverse(ab.begin(),ab.end());
    /*for(iter_ab = ab.begin();iter_ab != ab.end();iter_ab++){
        cout << *iter_ab << " ";
    }
    */
    for(i=0;i <(x*y-k);i++){
        ab.pop_back();
    }
    vector<long> abc; 
    for(i=0;i<min(k,x*y);i++){
        for(j=0;j<z;j++){
            long tmp = ab[i] + c[j];
            abc.push_back(tmp);
        }
    }
    sort(abc.begin(),abc.end());
    reverse(abc.begin(),abc.end());
    for(i=0;i<k;i++){
        cout << abc[i] << endl;
    }
    return 0;
}