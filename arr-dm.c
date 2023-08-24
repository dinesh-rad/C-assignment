
/*Matrix using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int **a,i,j,r,c;
	printf("Enter order of matrix: ");
	scanf("%d%d",&r,&c);
	a=(int**)malloc(sizeof(int*)*r);
	for(i=0;i<r;i++)
		{
			*(a+i)=(int*)malloc(sizeof(int)*c);
		}
	
	printf("Enter %d*%d elements of array: ",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("matrix U entered are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
		{
			free(*(a+i));
		}	
}
