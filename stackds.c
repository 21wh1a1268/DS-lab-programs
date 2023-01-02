#include<stdio.h>
#define SIZE 5
void push();
void pop();
void display();
int top=-1,stack[SIZE],i;
int main()
{
	int stack[SIZE],top=-1,num,i,ch;
	while(ch != 0)
	{
	    printf("enter choice:\n 1.push\n 2.pop\n 3.display\n");
	    scanf("%d",&ch);
	    
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			default:printf("enter choice between 1 to 3");
		}
	}
}
void push()
{
    int num;
	if(top==SIZE-1)
	{
		printf("STACK OVERFLOW");
	}
	else
	{
	    top = top+1;
	    printf("enter the element to insert");
	    scanf("%d",&num);
	    stack[top] = num;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("STACK UNDERFLOW");
	}
	else
	{
	        top--;
	}
}
void display()
{
	if(top!=-1)
	{
		printf("No element to be displayed");
		for(i=0;i<SIZE-1;i++)
		{
			printf("%d",stack[i]);
		}
	}
	else
		{
			printf("\n the stack is empty");
		}
	}
