// Postfix
#include<ctype.h>
#include<stdio.h>

struct stack
{
    int a[10];
    int top;
}s;

void push(int x);
int pop();

void push(int x)
{
	s.top++;
	s.a[s.top]=x;
}

int pop()
{
	int z;
	z=s.a[s.top];
	s.top--;
	return(z);
}

main()
{
    int op1;
    int op2;
    int result;
    int i;
    int d;
    int val;
    char postfix[20];
    
    printf("Enter the expression : ");
    scanf("%s",&postfix);
    i=0;
    
    while(postfix[i]!='\0')
    {
        d=isalpha(postfix[i]);
        if(d!=0)
        {
            printf("Enter the value %c : ",postfix[i]);
            scanf("%d",&val);
            push(val);
        }
        else
        {
            op2=pop();
            op1=pop();
            switch(postfix[i])
            {
                case '+':
                    push(op1+op2);
                break;
                
                case '-':
                    push(op2-op1);
                break;
                
                case '*':
                    push(op1*op2);
                break;
                
                case '/':
                    push(op2/op1);
                break;
            }
        }
        i++;
    }
    result=pop();
    printf("The result of %s is : %d",postfix,result);
    return 0;
}
