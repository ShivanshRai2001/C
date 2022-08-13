//Queue using array
#include<stdio.h>
#include <stdlib.h>

struct queue
{
	int a[10];
	int f,r;  //declaration of front and rear
}q;

void enqueue(int x);
int dequeue();
void display();

main()
{
	int x;
	int z;
	int i;
	int choice;
	q.f=-1;  //intitialization of front 
	q.r=-1;  //intitialization of rear
	
	while(1)
	{
	    printf("\nEnter the option :- ");
	    printf("\n\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
	    printf("\nEnter you choice : ");
	    scanf("%d",&choice);
	
	    switch(choice)
    	{
		    case 1: //enqueue
			    if(q.r==9)  //use if(q.r==NULL) if array is not used
			    {
				    printf("Queue is full.");
			    }
			    else
			    {
			        printf("\nEnter the value to be Enqueue : ");
			        scanf("%d",&x);
				    enqueue(x);
		    	}
		    break;
		
		    case 2: //dequeue
			    if(q.f==-1)  //Condition to check whether queue is empty
			    {
				    printf("Queue is empty.");
		    	}
			    else
			    {
		    		z=dequeue();
		    		printf("The dequeue element is %d",z);
		    	}
		    break;
		
		    case 3:  //display
	    		if(q.r==-1)  //Condition to check whether queue is empty
		    	{
		    		printf("The queue is empty.");
		    	}
	    		else
	    		{
		    		display();
		    	}
		    break;
		
		    case 4:  //exit
		        exit(0);
	        break;
    	}   
	}
}

void enqueue(int x)
{
	q.r++;  //Incrementing the value
	q.a[q.r]=x;  //Storing value in x
	if(q.f==-1)  //front will be 0 as new element is added
	{
		q.f=0;
	}
}

int dequeue()
{
	int y;  //Declaring a variable
	y=q.a[q.f];  //store value of front in new variable
	q.f++;  //Incrementing the value
	return(y);
}

void display()
{
	int i;  //Declaring a new variable
	for(i=q.f;i<=q.r;i++)  //forloop for queue elements
	{
	    printf("\t%d",q.a[i]);
	}
}
