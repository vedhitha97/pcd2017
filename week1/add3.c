#include <stdio.h>

int add( int a, int b,int c)
{
    int d;
    d = a + b + c;
    return d;
}

int main()
{
    int x,y,z,u;
    printf("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    u=add(x,y,z);
    printf("sum of %d+%d+%d is %d\n",x,y,z,u);
 }
