#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a.push_back(2000000000);
    sort(a.begin(),a.end());
    int count = 1;
    vector<long long > b;
    /*for(int i=0;i<n+1;i++){
        cout << a[i] << " ";
    }
    cout << endl;*/
    for(int i=0;i<n;i++){

                //cout << "count=" <<count << endl;
        if(a[i] == a[i+1]){
            count ++;
        }
        else{
            if(count >= 2 && count < 4){
                b.push_back(a[i]);
                count=1;
            }
            else if(count >= 4){
                b.push_back(a[i]);
                b.push_back(a[i]);
                count =1;
            }
            else{
                count=1;
            }
        }
    }


    if(b.size()>=2){
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());

    /*for(int i=0;i<b.size();i++){
        cout << b[i] << " ";
    }
    cout << endl;*/
        cout << b[0]*b[1]<<endl;
    }
    else{
        cout << "0"<<endl;
    }
    return 0;
}