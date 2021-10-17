#include <stdio.h>
int main ()
{   float x1,x2,y1,y2;
    int a1,a2,b;
    x1=2.5;
    x2=3.5;
    a1=7;
    a2=2;
    b=3;
    y1=4.7;
    y2=2.5;
    printf(" x=%f\n",a1%3*(int)(x1+y1)%2/4);
    printf("(float)(a2+b)/2+(int)x2%(int)y2= %f\n",(float)(a2+b)/2+(int)x2%(int)y2);
    return 0;



}
