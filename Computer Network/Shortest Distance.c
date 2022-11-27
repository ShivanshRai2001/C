#include<stdio.h>
int shortest(int distance[5], int source);
int visited[5]={0,0,0,0,0};
int main()
{
    int dist[5],pred[5];
    int source,n,i,y,new_dist;
    adjt[5][5]={99,2,4,99,99,2,99,2,4,99,4,2,99,99,3,99,4,99,99,5,99,99,3,5,99};

    printf("\n Enter the no. of Nodes - ");
    scanf("%d",&n);
    printf("\n Enter the Source Node - ");
    scanf("%d",&source);

    for(i=0;i<n;i++)
    {
        dist[i]= adjt[source][i];
        if(dist[i]!=99)
        {
            pred[i]=source;
        }
        else
        {
            pred[i]=99;
        }
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf(" %d ",dist[i]);
    }

    // visited[source] = 1;
    // y = shortest(dist, n);
    // printf("\n");
    // printf("\n %d", y);

    printf("\n");
    do
    {
        y = shortest(dist, n);
        visited[y] = 1;
        for(i=0; i<n; i++)
        {
            if(visited[i] == 0)
            {
                new_dist = dist[y] + adjt[y][i];
                if(new_dist < dist[i])
                {
                    dist[i] = new_dist;
                    pred[i] = y;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(visited[i] == 0)
            {
                break;
            }
        }
    }
    while(i<n);
    printf("\n");
    printf("Distance array :-");
    for(i=0;i<n;i++)
    {
        printf(" %d ",dist[i]);
    }

    printf("\n");
    printf("\nPredecessor array :-");
    for(i=0;i<n;i++)
    {
        printf(" %d ",pred[i]);
    }

    printf("\n\nDistance Table from source %d is : ",source);
    printf("\nVertex\t\tDistance from Vertex");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t\t%d",i,dist[i]);
    }
}

int shortest(int distance[5], int source)
{
    int i;
    int min, x;
    min = 99;
    x = -1;
    for(i=0; i<source; i++)
    {
        if(visited[i] == 0)
        {
            if(min > distance[i])
            {
                min = distance[i];
                x = i;
            }
        }
    }
    return x;
}
