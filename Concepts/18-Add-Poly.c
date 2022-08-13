//Addition of polynomial
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coef;
    int expo;
    struct node *add
};

void display(struct node *q);

main()
{
    struct node *head1, *head2, *head3, *p, *r, *q;
    int ch;
    head1=head2=head3=NULL;
    
    printf("First polynomial");
    do
    {
        if(head1==NULL)
        {
            p=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the coefficient - ");
            scanf("%d",&p->coef);
            printf("\nEnter the exponent - ");
            scanf("%d",&p->expo);
            p->add=front;
            head1=p;
        }
        else
        {
            p->add=(struct node*)malloc(sizeof(struct node));
            p=p->add;
            printf("\nEnter the coefficient - ");
            scanf("%d",&p->coef);
            printf("\nEnter the exponent - ");
            scanf("%d",&p->expo);
            //q->add=front; //circular link completed
            p->add=NULL;
        }
        printf("\nDo you want to add one more node 1:Yes 2:No - ");
        scanf("%d",&ch);
    }while(ch==1);
    
    printf("First polynomial as follows ");
    display(head1);
    
    printf("Second polynomial");
    do
    {
        if(head2==NULL)
        {
            p=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the coefficient - ");
            scanf("%d",&p->coef);
            printf("\nEnter the exponent - ");
            scanf("%d",&p->expo);
            p->add=front;
            head2=p;
        }
        else
        {
            p->=(struct node*)malloc(sizeof(struct node));
            p=p->add;
            printf("\nEnter the coefficient - ");
            scanf("%d",&p->coef);
            printf("\nEnter the exponent - ");
            scanf("%d",&p->expo);
            p->add=NULL; //circular link completed
        }
        printf("\nDo you want to add one more node 1:Yes 2:No - ");
        scanf("%d",&ch);
    }while(ch==1);
    printf("Second polynomial as follows ");
    display(head2);
    
    p=head1;
    q=head2;
    
    while(p!=NULL && q!=NULL)
    {
        if(head3==NULL)
        {
            r=(struct node*)malloc(sizeof(struct node));
            r->add=NULL;
            head3=r;
        }
        else
        {
            r->add=(struct node*)malloc(sizeof(struct node));
            r=r->add;
            r->add=NULL;
        }
        
        if(p->expo==q->expo)
        {
            r->coef=p->coef+q->coef;
            r->expo=p->expo;
            p=p->add;
            q=q->add;
        }
        else
        {
            if(p->expo>q->expo)
            {
                r->coef=p->coef;
                r->expo=p->expo;
                p=p->add;
            }
            else
            {
                r->coef=q->coef;
                r->expo=q->expo;
                q=q->add;
            }
        }
    }
    if(p!=NULL)
    {
        r->add=p;
    }
    if(q!=NULL)
    {
        r->add=q;
    }
    printf("\nResult polynomial as follows ");
    display(head3);
}

void display(struct node *q)
{
	while(q !=NULL)
	{
        printf("%dx^%d",q->coef,q->expo);
        q=q->add;
    }
}
