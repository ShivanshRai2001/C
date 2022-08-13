//Graph
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct queue
{
	int a[10];
	int f,r;
}q;

void enque(int x);
int deque();
void bfs(int x,int n);
void dfs(int x,int n);
int visited[4]={0,0,0,0};
int adj[4][4];


void main()
{
	int n, i, ver, z, j, ch;
	//clrscr();
	q.f=q.r=-1;
	printf("Enter the values for adjacency matrix : \n");
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	        printf("Enter the value : ");
	        scanf("%d",&adj[i][j]);
	    }
	}

	while(1)
	{
	    for(i=0;i<n;i++)
	    {
	        visited[i]=0;
	    }
	    
	    printf("\nEnter the No. of nodes : ");
	    scanf("%d",&n);
	    printf("\nEnter the starting vertex : ");
	    scanf("%d",&ver);
	    printf("\n1.BFS \n2.DFS \n3.Exit \nEnter your choice : ");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	        case 1:
		        bfs(ver,n);
	        break;

	        case 2:
		        dfs(ver,n);
	        break;

	        case 3:
		        exit(0);
	     }
    }
}

void bfs(int x,int n)
{
    int z,i;
	    enque(x);
	    visited[x]=1;
	    while(q.f<=q.r)
	    {
		    z=deque();
		    printf("%d\t",z);
		    for(i=0;i<n;i++)
		    {
			    if(adj[z][i]==1 && visited[i]==0)
			    {
				    enque(i);
				    visited[i]=1;
			    }
		    }
       }
}

void enque(int x)
{
	q.r++;
	q.a[q.r]=x;
	if(q.f == -1)
	{
		q.f=0;
	}
}

int deque()
{
	int y;
	y=q.a[q.f];
	q.f++;
	return(y);
}

void dfs(int x,int n)
{
   int i;
   printf("\t%d",x);
   visited[x]=1;
   for(i=0;i<n;i++)
    if(visited[i]==0 && adj[x][i]==1)
	{
	  dfs(i,n);
	}
}
