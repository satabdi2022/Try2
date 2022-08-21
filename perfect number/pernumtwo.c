#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n,s=0;
	printf("Enter any number to cheak Perfect Number \n");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		s=s+i;
		i++;
	}
	if(s==n)
	{
		printf("%d is perfect number",n);
	}
	else
	{
		printf("%d is not perfect number",n);
	}
	getch();
}
