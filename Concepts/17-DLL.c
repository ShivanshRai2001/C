// DLL
#include<stdio.h>
//perform premitive operations on DLL
#include<stdlib.h>

struct dnode
{
	int data;
	struct dnode *prev,*next;
};


void display(struct dnode *q);
void display_reverse(struct dnode *x);
int search(struct dnode *q,int k);

int main()
{
	struct dnode *head, *p,*q;
	int ch,key,ch1,d,ch2,ch3;
	head=NULL;
	do
	{
		if(head==NULL)
		{
			p=(struct dnode*)malloc(sizeof(struct dnode));
			printf("\nEnter the data :");
			scanf("%d",&p->data);
			p->prev=NULL;
			p->next=NULL;
			head=p;
		}
		else
		{
			q=(struct dnode*)malloc(sizeof(struct dnode));
			printf("\nEnter the data :");
			scanf("%d",&q->data);
			q->next=NULL;
			q->prev=p;//reverese link
			p->next=q;//forward link
			p=p->next;
		}
		printf("\nDo you want to add one more node 1:Yes 2:No ");
		scanf("%d",&ch);
	}while(ch==1);



	while(1)
	{
		printf("\n1. Display 2: Search  3: Reverse Display  ");
		printf("\nEnter your choice ");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:
				display(head);
			break;

			case 2:
				printf("\nEnter the element to search ");
				scanf("%d",&key);
				d=search(head,key);
				if(d==-1)
				{
					printf("\nElement not present in Linked List ");printf("\n");
				}
				else
				{
					printf("\nElement present in Linked List ");;printf("\n");
				}
			break;

			case 3:
				display_reverse(head);
			break;
		}//switch ends here
	}//while ends here
}//main() ends here

void display(struct dnode *q)
{
	printf("\nData present in DLL is \n");
	while(q != NULL)
	{
		printf("%d\t", q->data);
		q = q->next;
	}
}


void display_reverse(struct dnode *x)
{
	printf("\nData present in DLL is displayed in reverese order\n");
	while(x->next != NULL)
	{
		x=x->next;
	}
	//now x will be at last node
	while(x != NULL)
	{
		printf("%d\t", x->data);
		x = x->prev;
	}
}

int search(struct dnode *q,int k)
{
	while(q!=NULL)
	{
		if(q->data==k)
		{
			return(1);
		}
		q=q->next;
	}
	if(q==NULL)
	{
		return(-1);
	}

}
