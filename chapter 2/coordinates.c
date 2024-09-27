#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    float r,q;
    printf("value in cartesian system:");
    scanf("%d %d",&x,&y);
    r = sqrt(x*x + y*y);
    q = atan(y/x);
    printf("\n value in polar coordinates %f %f",r,q);
    return 0;
}