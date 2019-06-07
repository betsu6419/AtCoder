#include <iostream>
#include<string.h>
using namespace std;
int memo[1001][1001];
int main(int argc,char *argv[]){
    
    if(argv[1] == NULL){
        exit(1);
    }
    if(argv[2] == NULL){
        int l1 = strlen(argv[1]);
        cout << l1 << endl;
        return 0;
    }
    
    int l1 = strlen(argv[1]);     
    int l2 = strlen(argv[2]);
    memo[0][0] = 0;
    for(int i=0;i<=l1;i++){
        memo[i][0] = i;
    }
    for(int j=0;j<=l2;j++){
        memo[0][j] = j;
    }
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            int a = memo[i][j-1]+1;
            int b = memo[i-1][j]+1;
            int c = 1000000;
            if(argv[1][i-1] == argv[2][j-1]){
                c = memo[i-1][j-1];
            }
            else{     
               c = memo[i-1][j-1]+1;
            }
            int min1,min2,min3;
            min1 = min(a,b);
            min2 = min(b,c);
            min3 = min(min1,min2);
            memo[i][j] = min3;
        }
    }
    cout << memo[l1][l2] << endl;
    return 0;
}