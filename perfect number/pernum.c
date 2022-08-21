//perfect number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s=0,i;
	printf("Enter a number:-\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
		{
		s=s+i;
	    }
		
	}
	if(s==n)
	{
		printf("%d is a perfect number..",n);
	}
	else
	{
	    printf("\n %d is not a perfect number..",n);
	}
	getch();
}
