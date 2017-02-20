#include<stdio.h>
typedef struct
{
    float real;
    float imag;
} complex;
complex add(complex r1,complex r2)
{
    complex res;
    res.real=r1.real+r2.real;
    res.imag=r1.imag+r2.imag;
    return res;
}
int main()
{
    complex r1={4,5};
    complex r2={5,6};
    complex r3=add(r1,r2);
    printf("result:%f+i%f\n",r3.real,r3.imag);
    return 0;
}
