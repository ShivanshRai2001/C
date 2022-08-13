// Data Management using Array
#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[20];
    char spec[6];
};

int search(struct student a[5],int m,int key);

void main()
{
    clrscr();
    struct student a[5];
    int i,n,x,pos,ch;
    printf("Enter the no. of students  - ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll no. - ");
        scanf("%d",&a[i].roll_no);
        printf("\nEnter the name - ");
        scanf("%s",&a[i].name);
        printf("\nEnter the specialization ECE/ECOMP - ");
        scanf("%s",&a[i].spec);
    }
    while(1)
    {
        printf("\n1:Display \n2:Search \n3:Insert \n4:Delete \nEnter you choice - ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nThe Details are - ");
	            for(i=0;i<n;i++)
	            {
	                printf("\n%d\t %s\t %s\t\n",a[i].roll_no,a[i].name,a[i].spec);
	            }
            break;

            case 2: printf("\nEnter the roll no. you want to search - ");
	            scanf("%d",&x);
	            pos=search(a,n,x);
	            if(pos==-1)
	            {
	                printf("\n Student data not found");
	            }
	            else
	            {
	                printf("\n The Details of the Roll no are - ");
	                printf("%d\t%s\t%s",a[pos].roll_no,a[pos].name,a[pos].spec);
	            }
            break;

            case 3:  printf("\nEnter the roll no.  to search - ");
	            scanf("%d",&x);
	            pos=search(a,n,x);
	            if(pos==-1)
	            {
	                printf("\n Enter your Roll No. -");
	                scanf("%d",a[n].roll_no);
	                printf("\nEnter your name - ");
	                scanf("%s",a[n].name);
	                printf("\nEnter your Specilization - ");
	                scanf("%s",a[n].spec);
	            }
	            else
	            {
	                printf("\n Student Data is already present ");
	            }
            break;

        }
    }
}

int search(struct student a[5],int m,int key)
{
    int j;
    for(j=0;j<m;j++)
    {
        if(a[j].roll_no==key)
        {
	        return(j);
	    }
    }
    return(-1);
}
