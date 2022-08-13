//Stack using Array
#include<stdio.h>

struct stack
{
	int a[5];//usage of array
	int top;
}s;

void push(int x);//push() declaration
int pop();//pop() declaration
void display();//display() declaration

main()
{
    int i,y,ch,ele,n;
	s.top=-1; //stack initilization
	while(1)
	{
	    printf("\n Enter the option :- ");
	    printf("\n\n 1.Push\n 2.Pop \n 3.Display\n 4.Top\n 5.Exit \n ENTER YOUR choice : ");
	
	    scanf("%d", &ch);
	    switch(ch)	
	    {
		    case 1:  //Push
				if(s.top==4) //use if(s.top==NULL) if array is not used
				{
				    printf("STACK IS FULL");
				}
				else
				{
					printf("\nEnter a value to be pushed:");
                    scanf("%d",&ele);
					push(ele);//push() call
				}
		    break;
		
		    case 2:  //Pop
				if(s.top==-1) //Condition to check whether stack is empty
				{
				    printf("\nStack is empty");
				}
				else
				{
					y=pop();//pop() call
					printf("\n\t The popped element is %d",y);
				}
		    break;
		
		    case 3:  //Display
				if(s.top==-1) //Condition to check whether stack is empty
				{
					printf ("\n stack is empty");
				}
				else
				{
					for(i=s.top;i>=0;i--) //To display the element in the sequance
					{
						printf("%d\n",s.a[i]);
					}
				}
		    break;
		    
		    case 4:  //Top
		        if(s.top==-1) //Condition to check whether stack is empty
		        {
		            printf("stack is empty");
		        }
		        else
		        {
		            a=stack_top(); //top() call
		            printf("The top most element is %d",a);
		        }
		    break;
		    
		    case 5:  //Exit
                exit(0);
            break;
	    }
    }
}

void push(int x)
{
	s.top++;   //Incrementing the value
	s.a[s.top]=x;  //Storing value in x
}

int pop()
{
	int z;   //Declaring a variable
	z=s.a[s.top];   //store value of top in new variable
	s.top--;  //Decrementing the value
	return(z);
}

void display()
{
	int i;  //Declaring a new variable
	for(i=s.top;i>=0;i--)  //forloop for stack elements
	{
		printf("%d\n",s.a[i]);  //displaying the stack
	}
}

int stack_top()
{
    return(s.a[s.top])  //returns the value of the top most element
}
