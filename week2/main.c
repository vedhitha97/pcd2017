#include<stdio.h>
#include<math.h>
int main()
{
	float degree;
	printf("enter the angle\n");
	scanf("%f",&degree);
	float rad,sine;
	rad=float convert_radian (degree);
	sine=float sine(rad);
	printf("result sin(%f)=%f",degree,sine);
	return ;
}
float convert_radian(float x)
{
	float rad;
	rad=(3.1412/180)*d;
	return rad;
}
float sine(float x)
{
	flaot term,sum,prev,diff
	int i;
	diff=term=x;
	sum=x;
	for(i=3;diff>0.000001;i=i+2)
	{
		prev=term;
		term=(-term*x*x)/(i*(i-1));
		diff=fabs(prev-term);
		sum=sum+term;
	}
	return sum;
	int main()
{
	float degree;
	printf("enter the angle\n");
	scanf("%f",&degree);
	float rad,sine;
	rad=float convert_radian (degree);
	sine=float sine(rad);
	printf("result sin(%f)=%f",degree,sine);
	return ;
}
}

