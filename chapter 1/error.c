#include<stdio.h>

int main()
{
    int  n,sum,d1,d2,d3,d4,d5;
    printf("enter five digits number:");
    scanf("%d",&n);
    d5 = n % 10000;
    n = n/10000;
    d4 = n % 1000;
    n = n/1000;
    d3 = n % 100;
    n = n/100;
    d2 = n % 10;
    n = n/10;
    d1 = n;
    sum = d1+d2+d3+d4+d5;
    printf("sum of the five digits %d",sum);
    return 0;
}