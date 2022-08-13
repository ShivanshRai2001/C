//Stack using SLL
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
  struct node *add;  //pointer declaration 
}*top; //global pointer declared

void push(int x);
int pop();
void display();

int main()
{
    int ele,y,ch;
	struct node *t;  //struct declaration using pointer
	top=NULL;  //stack initilization

	while(1)
	{
		printf("\n1. Push  \n2. Pop  \n3. Display \n4. Exit \nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)	
		{
			case 1: //Push
                t=(struct node*)malloc(sizeof(struct node));  //t holds the address of the first byte in the allocated memory  (castType*) malloc(size)
                if(t==NULL)  //Condition to check whether stack is full
                {
                    printf("\nStack is full\n");
                }
                else
                {
                    printf("\nEnter the elment to be pushed : ");
                    scanf("%d",&ele);
                    push(ele);
                }
			break;
			
			case 2:  //pop
				if(top==NULL)  //Condition to check whether stack is empty
				{
					printf("\nStack is empty\n");
				}
				else
				{
                    y=pop();
                    printf("\nValue poped is %d\n",y);
				}
			break;
			
			case 3:  //display
				if(top==NULL)  //Condition to check whether stack is empty
				{
					printf("\nstack is empty\n");
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

int pop()
{
    struct node *temp;  //temparatory pointer is declared
	int z;   //variable declaration
	temp=top;  //temparatory store top value
	z=temp->data;  //temp data will be stored in z
	top=temp->add;  //temp address will be stored in top
	free(temp);  //statement frees the space allocated in the memory pointed by temp
	return(z);  //goto main function
}

void push(int x)
{
	struct node *temp;  //temparatory pointer is declared
	temp=(struct node*)malloc(sizeof(struct node));  //temp stores the memory allocation
	temp->data=x;  //x value will be stored in temp data
	temp->add=top;  //top valuw will be stored in address of temp
    top=temp;  //top=temp
}

void display()
{
    struct node *q=top;
	printf("\nData present in SLL is \n");
	while(q!=NULL)  //if while(q->add!=NULL then the first element will not be printed)
	{
		printf("%d\n",q->data);
		q=q->add;  //will store address of next data
	}
}
