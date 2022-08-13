//Insertion sorting
#include<stdio.h>

int main()
{
    int num;
    int a[100];
    int i;
    int j;
    int c;
    int temp;
    
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    
    printf("Enter the %d elements :\n",num);
    
    for(c=0;c<num;c++)
    {
        scanf("%d",&a[c]);
    }

    for(i=1;i<num;i++)
    {
	    temp=a[i];
	    for(j=i-1;temp<a[j] && j>=0 ;j--)  // temp<a[j]
	    {
	    	a[j+1]=a[j];
	    }
	    a[j+1]=temp;
    }

    printf("The sorted array in assending order is :\n");
    
    for(c=0;c<num;c++)
    {
        printf("%d\t",a[c]);
    }
    return 0;
}
