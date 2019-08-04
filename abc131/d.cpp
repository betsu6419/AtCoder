#include<iostream>
#include<utility>
#include<algorithm>
#include <vector>
using namespace std;

int n;
int a[1000000];
int b[1000000];
vector <pair<int,int> > v;

bool comp(pair<int,int> a,pair <int,int> b){
    if(a.second != b.second){
        return a.second<b.second;
    }
    else{
        return a.first < b.first;
    }
}
int main(){
    cin >> n;
   
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    
    sort(v.begin(),v.end(),comp);
/*
    for(int i =0;i<n;i++){
        cout << v[i].first << " " <<v[i].second << endl;
    }
  
  */  int now = 0;
    for(int i=0;i<n;i++){
        if(v.at(i).second >=(v.at(i).first+now)){
            now += v.at(i).first;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}