#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,temp;
	printf("Array size: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{

				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAscending order is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
