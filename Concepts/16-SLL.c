//SLL
#include<stdio.h>
//#include<alloc.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *add;  //struct pointer declaration
};

void display(struct node *q);
int search(struct node *q,int k);
struct node* insert_start (struct node *p);
void insert_end (struct node *temp);
struct node* delete_first(struct node *p);
void delete_end(struct node *p);

void main()
{
    struct node *head, *p;  //pointer declaration
    int ch,key,a,b,c;
    head=NULL;  //Initialy head should be null

    do
    {
        if(head==NULL)
        {
            p=(struct node*)malloc(sizeof(struct node));  //p holds the address of the first byte in the allocated memory
            printf("\nEnter the data - ");
            scanf("%d",&p->data);  //data will be stored
            p->add=NULL; //address of p will be null
            head=p;  
        }
        else
        {
            p->add=(struct node*)malloc(sizeof(struct node)); //p holds the 
            p=p->add;  //will store address of next data
            printf("\nEnter the data - ");
            scanf("%d",&p->data);
            p->add=NULL;  //address of p will be null
        }
        printf("\nDo you want to add one more node 1:Yes 2:No - ");
        scanf("%d",&ch);
    }while(ch==1);

    while(1)
    {
        printf("\n1.Display  \n2.Search \n3.Insert \n4.Delete \n5.Exit  \nEnter Your Choice - ");
        scanf("%d",&a);
    
        switch(a)
        {
            case 1: 
                display(head);
            break;
            
            case 2:
                printf("\nEnter the element you want to search - ");
                scanf("%d",&key);
                c=search(head,key);
                
                if(c==-1)
                {
                    printf("\nElement not found in the list");
                }
                else
                {
                    printf("\nElement found in the list");
                }
                break;
                
            case 3:
                printf("\nWhere You want to insert new node \n1.At the Beginning \n2.At the End \nEnter choice - ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    head=insert_start(head);
                    break;
                    
                    case 2:
                        insert_end(head);
                    break;
                }
                display(head);
            break;
            
            case 4:
                printf("\nWhich node you want to delete 1. First 2. Last : ");
                scanf("%d",&c);
                switch(c)
                {
                    case 1:
                        head=delete_first(head);
                    break;
                    
                    case 2:
                        delete_end(head);
                    break;
                }
                display(head);
            break;
            
            case 5:
                exit(0);
            break;
        }
    }
}

void display(struct node *q)
{
    printf("\nData present in Linked list \n");
	while(q !=NULL)  //print all the value including the first one
	{
        printf("%d \t",q->data);
        q= q->add;  //will store address of next element
    }
}

int search(struct node *q,int k)
{
    while(q!=NULL)  //print all the value including the first one
    {
        if(q->data==k)  //if q data is equal to k
        {
            return(1);
        }  
        q=q->add;  //will store address of next element
    }
    if(q==NULL)  //if the value is null
    {
        return(-1);
    }
}

struct node* insert_start (struct node *p)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));  //temp will store malloc of struct node
    printf("\n Enter the data for new node - ");
    scanf("%d",&temp->data);  //here data of temp will be stored
    temp->add=p;  //p will be stored in adddress of temp
    return(temp);
}

void insert_end (struct node *temp)
{
    struct node *r;
    while(temp->add!=NULL) //except first all the elements
    {
        temp=temp->add;  //will store address of next element
    }
    r=(struct node*)malloc(sizeof(struct node)); //r will store malloc of struct node
    printf("Enter the data for new node - ");
    scanf("%d",&r->data);
    r->add=NULL;
    temp->add=r;
}

void delete_end(struct node *p)
{
    struct node *temp;
    temp=p;
    while(temp->add!=NULL)
    {
        temp=temp->add;
    }
    while(p->add!=temp)
    {
        p=p->add;
    }
    p->add=NULL;
    free(temp);
}

struct node* delete_first(struct node *p)
{
    struct node *temp;  //temp pointer is declared
    temp=p;  
    p=p->add;  //store address of next element
    free(temp);  //free the malloc 
    return(p);
}
