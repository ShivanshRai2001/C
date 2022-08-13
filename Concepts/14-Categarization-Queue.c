// Categarization of data using Queue
#include<stdio.h>
#include<conio.h>

struct queue
{
 int a[10];
 int f,r;
};

struct queue enqueue (struct queue q,int x);
void display(struct queue q);

void main()
{
clrscr();
struct queue q1,q2;
int x,ch;
 q1.f= q2.f=-1;
 q1.r= q2.r=-1;

do
 {
    printf("Enter the Number - ");
    scanf("%d",&x);
    if(x%2==0)
    {
      q1 = enqueue(q1,x);
    }
    else
    {
      q2 = enqueue(q2,x);
    }
    printf("\n1.Display queques \n2.Enter New Number \nEnter your choice-");
    scanf("%d",&ch);
    }while(ch==2);
   printf("\n q1:");
   display(q1);
   printf("\n q2:");
   display(q2);

   getch();
 }

struct queue enqueue(struct queue q,int x)
{
    if(q.r==9)
    {
      printf("Queue is Full\n");
      return(q);
    }
	q.r++;
	q.a[q.r]=x;
	if(q.f ==-1)
	{
	     q.f=0;
	}
	return q;
 }

void display(struct queue q)
{
	int i;
	for(i=q.f;i<=q.r;i++)
	{
			printf("%d\t",q.a[i]);
	}
}
