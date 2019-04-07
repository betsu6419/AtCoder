#include <iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(const pair<int,int>a,const pair<int,int>b ){
    return a.first < b.first;
}

int main(){
    int n,m,i,j,m_now = 0;
  long ans = 0;
  cin >> n >> m;
  int a[n],b[n];
  vector <pair<int,int> >pairs(n);
  for(i = 0;i < n ; i++){
    cin >>a[i]>>b[i];
  }
  for(i = 0;i<n;i++){
      pairs[i] = make_pair(a[i],b[i]);
  }
  sort(pairs.begin(),pairs.end(),cmp);
  for(i = 0;i < n;i++){
      for(j=0;j < pairs[i].second;j++){
        m_now ++;
        ans += pairs[i].first;
        //cout << m_now << endl;
        if(m_now == m){
            cout << ans << endl;
            return 0;
        }
      }
  }
}