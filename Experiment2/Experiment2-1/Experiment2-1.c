#include <stdio.h>

int main(void)
{   int a1,a2,a3,a4,a5,a6,n;
    a1=a2=a3=a4=a5=a6=12;
    n=5;
    printf ("a1 = %d\n",a1+=a1);
    printf ("a2 = %d\n",a2-=2);
    printf ("a3 = %d\n",a3*=2+3);
    printf ("a4 = %d\n",a4/=a4+a4);
    printf ("a5 = %d\n",a5%=(n%=2));
    printf ("a6 = %d\n",a6 +=a6-=a6*=a6);

    return 0;
}
