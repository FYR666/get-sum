#include<stdio.h>
void main()
{
	int i = 2, sum = 0;
	do
	{
		sum = sum + i;
		i = i * 10 + 2;}
	while (i <= 22222);
		printf("2+22+222+2222+22222=%d\n", sum);
}
