#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	printf("Enter a random number:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=0;k<j;k++)
			{
				printf("nothing\n");
			}
		}
	}
	getch();
	
}
