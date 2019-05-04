#include <iostream>
#include<cmath>
using namespace std;
const long long INF = 1LL<<62;
long long X;
long long sum = 0;
long long ans=0;
int digit = 0;
int memo[2000];

int main(){
    cin >> X;
    if(X/10 == 0){
        cout << 10+X-1 << endl;
        return 0;
    }
    long long x = X;
    while(x!=0){
        sum += x%10;
        x = x/10;
    }
    while(sum != 0){
        if(memo[digit] == 9){
            digit ++;
            memo[digit] ++;
            sum --;
        }
        else{
            memo[digit] ++;
            sum --;
        }
    }
    int max_digit = digit;
    while(digit !=-1){
        ans += memo[digit]*pow(10,digit);
        digit --;
    }
    if(ans ==X ){
        if(memo[max_digit] == 9){
            memo[max_digit+1] =1;
            memo[max_digit] = 8;
            digit = max_digit+1;
        }
        else{
            memo[max_digit] += 1;
            memo[max_digit-1] -= 1;
            digit = max_digit;
        }
        ans = 0;
        while(digit !=-1){
                ans += memo[digit]*pow(10,digit);
                digit --;
        }
    }
    cout << ans << endl;
    return 0;
}