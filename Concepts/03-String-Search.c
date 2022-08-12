// String Search
#include <stdio.h>
#include <string.h>

int main()
{
    char data[100][100];
    char search[50];
    int i, n, c=0;

    printf("How many names you want to enter : ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter name %d : ", i+1);
        scanf("%s", data[i]);
    }

    printf("\nEnter name to be searched : ");
    scanf("%s", search);

    for (i=0; i<n; i++)
    {
        if(strcmp(data[i], search) == 0)
        {
            c = 1;
            break;
        }
    }

    if(c == 1)
    {
        printf("\n%s Found at position '%d'", data[i], i+1);
    }
    else
    {
        printf("\n%s NOT present in above name.", data[i]);
    }
    return 0;
}
