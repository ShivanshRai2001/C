//Bubble sorting
#include<stdio.h>

int main()
{
    int num[20];
    int i;
    int j;
    int element;
    int position;
    int n;
    
    printf("Enter the number of elements you want to enter in an array : ");
    scanf("%d",&element);
    
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]<num[j]) //>
            {
                position=num[i];
                num[i]=num[j];
                num[j]=position;
            }
        }
    }

    printf("The elements arranged in decending order is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
}
