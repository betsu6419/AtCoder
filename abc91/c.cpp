#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    else{
        return a.second<b.second;
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > red;
    vector<pair<int,int> > blue;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >>b;
        red.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        blue.push_back(make_pair(a,b));
    }
    sort(red.begin(),red.end(),cmp);
    sort(blue.begin(),blue.end(),cmp);

    
    int ans = 0;
    int i=0;
    for(int i=0;i<blue.size();i++){
        int tmp = red.size();
        int max = -1;
        for(int k=red.size()-1;k>=0;k--){
           if(blue[i].first>red[k].first&&blue[i].second > red[k].second){
               if(max <  red[k].second){
                   max = red[k].second;
                   tmp = k;
               }
           }
        }
        if(max != -1){
            ans ++;
            red.erase(red.begin()+tmp);
        }
        /*cout << i << endl;
        for(int i=0;i<red.size();i++){
        cout <<red[i].first << " " << red[i].second << endl;
    }*/

    }
    cout << ans << endl;
    return 0;
}