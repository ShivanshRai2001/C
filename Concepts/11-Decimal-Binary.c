//Deciaml to binary
#include<stdio.h>

struct stack
{
	int a[10];
	int top;
}s;

void push(int x);//push() declaration
int pop();//pop() declaration

main()
{
    int ele,y,rem;
    s.top=-1;//stacl initialization

    printf("Enter the element: ");
    scanf("%d",&ele);

    printf("\nThe binary representation of %d is \n",ele);
    while(ele!=0)
    {
        rem=ele%2;
        push(rem);//push call
        ele=ele/2;
    }
    
    while(s.top!=-1)
    {
        y=pop();
        printf("%d",y);
    }
    
}

void push(int x)
{
	s.top++;
	s.a[s.top]=x;
}

int pop()
{
	int z;
	z=s.a[s.top];
	s.top--;
	return(z);
}

