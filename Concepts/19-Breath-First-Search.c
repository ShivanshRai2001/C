//BST
#include<stdio.h>
#include<stdlib.h>
struct btreenode
{
	struct btreenode *leftchild ;
	int data ;
	struct btreenode *rightchild ;
} ;

void insert ( struct btreenode **sr, int num );
void inorder (struct btreenode *x );
void preorder (struct btreenode *x );
void postorder (struct btreenode *x );
int search(struct btreenode *p, int k);

int main()
{
	struct btreenode *bt ;
	int n, ch, key,d,x;
	bt=NULL;

	do
	{
		printf("\nEnter element ");
		scanf("%d",&n);
		insert ( &bt, n ) ;
        printf("\nDo you want to add one more element? 1: yes  2: No ");
        scanf("%d",&ch);
	}while(ch==1);

	 while(1)
  {

	printf("\n1:Inorder \t2:Preorder \t3:Postorder \t4:Search \t5:Exit \nEnter your choice : ");
    scanf("%d",&x);  printf("\n");
	switch(x)
    {
		case 1:
	        printf("\nInorder Traversal of Tree is :\n");
	        inorder(bt); printf("\n");
	    break;
	    
	    case 2:
	        printf("\nPreorder Traversal of Tree is :\n");
	        preorder(bt); printf("\n");
	    break;
	    
	    case 3:
        	printf("\nPostorder Traversal of Tree is :\n");
	        postorder(bt); printf("\n");
	    break;
	    
	    case 4:
	        printf("\nEnter the element to search :");
	        scanf("%d",&key);
	        d=search(bt,key);
	        if(d==-1)
	        {
	        	printf("\nElement is not present "); printf("\n");
	        }
	        else
	        {
		        printf("\nElement is present "); printf("\n");
	        }
	    break;
	    
        case 5:
            return(0);
        break;
    }
  }
}

void insert ( struct btreenode **sr, int num )
{
	if ( *sr == NULL )
	{
		*sr=(struct btreenode*)malloc(sizeof(struct  btreenode));
		( *sr ) -> leftchild = NULL ;
		( *sr ) -> data = num ;
		( *sr ) -> rightchild = NULL ;
	}
	else
	{
		if ( num < (*sr)->data )
			insert ( &( ( *sr ) -> leftchild ), num ) ;
		else
			insert ( &( ( *sr ) -> rightchild ), num ) ;
	}
}

void inorder (struct btreenode *x )
{
	if ( x != NULL )
	{
		inorder ( x->leftchild ) ;
		printf ( "\t%d", x -> data ) ;
		inorder ( x->rightchild) ;
	}
	else
		return ;
}

void preorder (struct btreenode *x )
{
	if ( x != NULL )
	{
		printf ( "\t%d", x -> data ) ;
		preorder ( x->leftchild ) ;
		preorder ( x->rightchild) ;
	}
	else
		return ;
}


void postorder (struct btreenode *x )
{
	if ( x != NULL )
	{
		postorder ( x->leftchild ) ;
		postorder ( x->rightchild) ;
		printf ( "\t%d", x -> data ) ;
	}
	else
		return ;
}

int search(struct btreenode *p, int k)
{
	while(p!=NULL)
	{
		if(p->data ==k)
		{
			return(1);
		}
		else
		{
			if(p->data < k)
			{
				p=p->rightchild;
			}
			else
			{
				p=p->leftchild;
			}
		}

	}
	return(-1);
}
