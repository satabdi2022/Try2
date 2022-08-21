//1!/1+2!/2+3!/3+4!/4+5!/5 
#include<stdio.h>
//#include<conio.h>
int main()
{
	int i;
	float sum=1.0;
	printf("1!/1");
	for(i=2;i<=5;i++)
	{
		sum=sum+fact(i)/i;
		printf("+ %d!/%d",i,i);
		
	}
	printf("=%f",sum);
	
}
int fact (int x)
{
	int i;
	int fact =1;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
