//Selection sorting
#include<stdio.h>

int main()
{
	int a[10],i,n,min,index, j,temp;
	printf("Enter the no of elements in an array");
	scanf("%d",&n);
	printf("\nEnter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray elements BEFORE sorting are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		//reserve=a[i];
		min=a[i+1];
		index=i+1;
		for(j=index+1;j<n;j++)
		{
			if(a[j] > min) //< for accending
			{
				min=a[j];
				index=j;	
			}
		}
		if(a[i]<a[index])  //> for accending
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
	
	printf("\nArray elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
