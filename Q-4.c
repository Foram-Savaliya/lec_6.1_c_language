#include<stdio.h>

void main()
{
	int i=1,n;
	printf("enter the number:- ");
	scanf("%d",&n);
	
	while(n>=i)
	{
		if(n%2==1)
		{
			printf("%d ",n);	
		}		
		n--;
	}
}
