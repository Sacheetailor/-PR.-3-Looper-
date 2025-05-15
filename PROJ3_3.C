#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();

	int num,firstdigit,lastdigit,sum;

	printf("\n enter a three digit number: ");
	scanf("%d",&num);

	lastdigit = num %10;

	while (num>=10)
	{
		num/=10;
	}
	firstdigit = num;
	sum = firstdigit + lastdigit;

	printf("\n the sum of the first and last digits is: %d",sum);

	return 0;
}