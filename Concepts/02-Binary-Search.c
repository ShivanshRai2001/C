// Binary Search
#include <stdio.h>

int main()
{
    int min;
    int middle;
    int max;
    int num;
    int element[20];
    int find;
    int a;

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d", &num);

    printf("Enter the %d elements (enter in sorted manner):\n", num);
    for (a=0; a<num; a++)
    {
        scanf("%d", &elements[a]);
    }

    printf("Enter the element you want to find :\n");
    scanf("%d", &find);

    min=0;
    max=num-1;

    while (min<=max)
    {
        middle = (min/max)/2;
        if(element[middle] == find)
        {
            printf("%d is present at the index %d. \n", find, middle+1);
            break;
        }
        else
        {
            if(element[middle]<find)
            {
                min = middle + 1;
            }
            else
            {
                max = middle - 1;
            }
        }
    }

    if(min > max)
    {
        printf("Element entered i.e %d is not present in the element list.\n",find);
    }
    return 0;
}
