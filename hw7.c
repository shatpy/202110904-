#include <stdio.h>
#include <math.h>
double vusck(double under[])
{
	double a;
	double b,c;
	c = 0;
	a = 0;
	int i;

	for (i = 0; i < 5; ++i)
	{
		a += under[i];
	
	}

	b = a / 5;
	for (i = 0; i < 5;++i)
	{
		c += pow((under[i] - b), 2);

	}
	return sqrt(c / 5);



}

main(void)
{
	double under[5];
	int i;
	printf("Enter 5 real numbers:");

	scanf("%lf %lf %lf %lf %lf", &under[0], &under[1], &under[2], &under[3], &under[4]);
	printf("Standard Deviation=%.3lf", vusck(under));


	return 0;
}