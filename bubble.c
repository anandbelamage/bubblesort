#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	printf("enter %d integrs:",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1-i;j++)
	{
	if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
		}
	}
	printf("the sorted array is..\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\n");
	return 0;
	}
	
		
	
