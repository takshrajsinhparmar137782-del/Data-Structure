//Write a program to print string in reverse order using stack.
// 92500588008

#include<stdio.h>
#include<string.h>

#define max 100

char stack[max],str[max];
int top=-1;

void push()
{
    char ch;
    scanf(" %c",&ch);
    stack[++top] = ch;
}

void pop()
{
    printf("%s",str);
}

void main()
{
    int i,n;

    printf("Enter number of character : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        push();
    }
    for(i=0;i<n;i++)
    {
        str[i]=stack[top--];
    }
    str[n]='\0';
    pop();
}
