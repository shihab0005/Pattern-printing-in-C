/*
input:
Enter Range =5
output:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/


#include<stdio.h>
int main()
{
	int row,col,n;
	
	printf("Enter Range :");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("%d ", row);
		}
		printf("\n");
	}
	for(row=n-1;row>=1;row--){
		for(col=1;col<=row;col++){
			printf("%d ", row);
		}
		printf("\n");
	}
	
}
