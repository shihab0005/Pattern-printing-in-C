/*
input:
Enter Range =5
output:
A
B B
C C C
D D D D
E E E E E

*/


#include<stdio.h>
int main()
{
	int row,col,n;
	
	printf("Enter Range =");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("%c ", row+64);
		}
		printf("\n");
	}
	
}
