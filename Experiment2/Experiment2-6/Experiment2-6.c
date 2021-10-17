#include <stdio.h>
main ()
{   int a;
    char ch;
    float b;
    printf ("Input :");
    scanf("%d",&a);
    printf (" a=%d,(int)=%d\n",a,sizeof(a));
    scanf("%c",&ch);
    ch=getchar();
    printf(" ch=%d,char=%d\n",ch,sizeof(char));
    scanf("%f",&b);
    printf(" b=%f,float=%d\n",b,sizeof(b));
    return 0;






}
