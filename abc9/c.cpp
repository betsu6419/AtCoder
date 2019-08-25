#include<iostream>
#include<string>


using namespace std;

char c[100];

int main(){
    int n,k;
    string s;
    string t;
    cin >> n >> k;
    cin >> s;

    int sn[26];
    fill(sn,sn+26,0);
    for(int i=0;i<s.size();i++){
        sn[s[i]-'a']++;
    }
    int un[26];
    copy(sn,sn+26,un);

    for(int i=0;i<n;i++){
        sn[s[i]-'a']--;
        for(int j=0;j<26;j++){
            if(un[j] == 0){
                continue;
            }
            un[j]--;
            int changed = 0;
            if(j!= s[i] -'a'){
                changed ++;
            }
            for(int l=0;l<26;l++){
                changed += max(0,sn[l] - un[l]);
            }
            if(changed <= k){
                t.push_back(j+'a');
                if(j!=s[i] - 'a'){
                    k --;
                }
                break;
            }
            un[j] ++;
        }
    }

    cout << t << endl;
    return 0;
}