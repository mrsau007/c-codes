#include<stdio.h>
int main()
{
    int p,t,count;
    float si,r;
    count=1;
    while(count<=3)
    {
        printf("give the value of p,t,r:\n");
        scanf("%d %d %f",&p,&t,&r);
        si=(p*t*r/100);
        printf("simple interest = Rs.%f\n",si);
        printf("%d",count);
        count=count+1;
    }
    return 0;
}
