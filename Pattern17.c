/*
input:
Enter Range =5
output:
    A
   AB
  ABC
 ABCD
ABCDE

*/
#include<Stdio.h>
int main()
{
	int row,col,n;
	printf("Enter Range to print :");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
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
