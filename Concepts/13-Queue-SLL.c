//Queue using SLL
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *add;
}*front,*rear;

void enqueue(int x);//enque() declaration
int deque();//deque declaration
void display();//display() declaration

int main()
{
	int ch,enq,x,y,z;
	struct node *p;
	front=rear=NULL;
	
	while(1)
	{
        printf("\n1.Enque \n2.Deque \n3.Display \n4.Exit Enter yout choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                p=(struct node*)malloc(sizeof(struct node));
                if(p==NULL)
                {
                    printf("\nStack is full\n");
                }
                else
                {
                    printf("\nEnter the elment to be enqueue : ");
                    scanf("%d",&enq);
                    enqueue(enq);
                }
            break;
            
            case 2:
                if(front==NULL)
                {
                    printf("Queue is empty");
                }
                else
                {
                    z=deque();
                    printf("\nValue poped is %d\n",z);
                }
            break;
            
            case 3:
                if(front==NULL)
                {
                    printf("queue is empty");
                }
                else
                {
                    display();
                }
            break;
            
            case 4:
                exit(0);
            break;
        }
    }
}

void enqueue( int x)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	p->add=NULL;
	if(rear==NULL)
	{
		rear=front=p;
	}
	else
	{
		rear->add=p;
		rear=rear->add;
	}
}

int deque()
{
	int y;
	struct node *z;
	y=front->data;
	z=front;
	front=front->add;
	free(z);
	return(y);
}

void display()
{
	struct node *q;
	printf("\nData present in SLL is \n");
	q=front;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->add;
	}
}
