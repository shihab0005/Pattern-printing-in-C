/*
input:
Enter Range =5
output:
#
# #
# # #
# # # #
# # # # #
*/


#include<stdio.h>
int main()
{
	int row,col,n;
	
	printf("Enter Range :");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("# ");
		}
		printf("\n");
	}
	
}
