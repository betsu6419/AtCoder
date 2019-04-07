#include<stdio.h>

int main(){
    int a,i;
    a = 0;
    int c;
    for(i=0;i<=2 && (c=getchar())!=EOF;++i){
        if(c == '1'){
            a = a + 1; 
        }
     
    }
    printf("%d\n",a);
    return 0;

}