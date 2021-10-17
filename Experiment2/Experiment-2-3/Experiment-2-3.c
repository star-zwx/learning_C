#include <stdio.h>
#include <math.h>
int main ()
{   int a,b,c,d;
    printf ("Input: ");
    scanf ("%d",&a);
    a=fabs(a);
    b=a%10;
    c=(a-b)%100/10;
    d=a/100;


    printf("Output= %d\n",b*100+c*10+d);
    return 0;




}
