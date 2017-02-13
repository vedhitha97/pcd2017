
sum to add n numbers:

#include<stdio.h>
int add(int a[],int n) 
{
  	int sum = 0 ;
    for(int i=0; i<n; i++)
    {
        sum += a[i] ;
    }
    return sum;
}

int main() 
{
    int n =10;
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int res = add (a,n) ;
    printf("Result is: %d \n", res);
    return 0;
}
sum to add two complex numbers:
#include<stdio.h>
typedef struct 
{
    float real;		
    float imag;
} complex;
complex add (complex r1, complex r2)
{
    complex res;
    res.real=r1.real+r2.real;
    res.imag=r1.imag+r2.imag;
    return res;
}
int main()
{
    complex r1={4,6};
    complex r2={3,8};
    complex r3=add(r1,r2);
    printf("result:%f+i.%f\n",r3.real,r3.imag);
    return 0;
}
          
          
          
          
