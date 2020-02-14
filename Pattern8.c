/*
input:
Enter Range =5
output:

# # # # #
# # # #
# # #
# #
#

*/


#include<stdio.h>
int main()
{
	int row,col,n;
	
	printf("Enter Range :");
	scanf("%d",&n);
	
	for(row=n;row>=1;row--){
		for(col=1;col<=row;col++){
			printf("# ");
		}
		printf("\n");
	}
	
}
