/*
input:
Enter Range =5
output:
ABCDE
 ABCD
  ABC
   AB
    A

*/
#include<stdio.h>
int main()
{
	int row,col,n;
	printf("Enter Range to print :");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
	{
		for(col=1;col<=n-row;col++)
		{
			printf(" ");
			
		}
		for(col=1;col<=row;col++)
		{
			printf("%c",col+64);
		}
		printf("\n");
	}
	
}
