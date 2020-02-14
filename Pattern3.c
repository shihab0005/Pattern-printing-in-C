/*
input:
Enter Range =5
output:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/


#include<stdio.h>
int main()
{
	int row,col,n;
	
	printf("Enter Range =");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("%d ", col%2);
		}
		printf("\n");
	}
	
}
