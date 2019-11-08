#include <stdio.h>
int main()
{
    int b=0;
    int a=1;
    char number;
    int c=0;
    while((number=getchar())!='\n'){
        c=c*10+(number-'0');
    }
    while(c!=0){
        if((a&c)!=0) b++;
        c=c>>1;
    } 
    printf("一共有%d个一",b);
}