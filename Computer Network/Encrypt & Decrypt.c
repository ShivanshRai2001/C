#include<stdio.h>
#include<string.h>
int main()
{
	char pt[20], ct[20], rpt[20];
	int c, e, d, i;
	char z[]="$";
	printf("Enter the string : ");
	gets(pt);

	d = strlen(pt);
	c = d%4;
	if(c!=0)
	{
		e=4-c;
		for(i=0;i<e;i++)
		{
			strcat(pt,z);
		}
		printf("\nAppended String: %s\n", pt);
	}

	for(i=0; i<strlen(pt); i=i+4)
	{
		// ct[i] = pt[i+1];
		// ct[i+1] = pt[i+3];
		// ct[i+2] = pt[i+2];
		// ct[i+3] = pt[i];
		ct[i] = pt[i+2];
		ct[i+1] = pt[i+1];
		ct[i+2] = pt[i];
		ct[i+3] = pt[i+3];
	}
	ct[i] = '\0';
	printf("\nEncryption code of the string is : %s",ct);

	for(i=0; i<strlen(ct); i=i+4)
	{
		// rpt[i] = ct[i+1];
		// rpt[i+1] = ct[i+3];
		// rpt[i+2] = ct[i+2];
		// rpt[i+3] = ct[i];
		rpt[i] = ct[i+2];
		rpt[i+1] = ct[i+1];
		rpt[i+2] = ct[i];
		rpt[i+3] = ct[i+3];
	}
	rpt[i] = '\0';
	printf("\nDecryption code of the string is : %s", rpt);

	i=0;
	while(rpt[i]!='$')
	{
		i++;
	}
	rpt[i]='\0';
	printf("\nOriginal code of the string is : %s", rpt);
}
