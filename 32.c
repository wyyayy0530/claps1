#include<stdio.h>
int main()
{
    unsigned int a=1;
    unsigned int c=0-1;
    int b=0;
    while(a !=0) {
        a=a<<1;
        b++;
    }
    printf("%d\n%u\n",b,c);
    return 0;
}