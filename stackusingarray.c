#include<stdio.h>
#include<stdbool.h>

void push(int,int [],int);
void pop(int []);
bool isEmpty();
bool isFull(int);
void peek(int []);
int top=-1;
int main()
{
    size_t size;
    printf("Enter the Size:");
    scanf("%d",&size);
    int stack[size];

    pop(stack);
    push(10,stack,5);
    push(20,stack,5);
    push(30,stack,5);
    push(40,stack,5);
    push(50,stack,5);
    push(60,stack,5);
    peek(stack);


}
void peek(int stack [])
{
    printf("Top of the Stack:%d\n",stack[top]);
    return;
}
void push(int data,int stack [],int size)
{
    if(isFull(size))
    {
        printf("Stack Overflow.\n");
        return;

    }
    top++;
    stack[top]=data;
    printf("Push Done.\n");
}

void pop(int stack [] )
{
    if(isEmpty())
    {
       printf("Stack Underflow.\n");
       return; 
    }
    printf("Popped Element: %d \n",stack[top--]);
}
bool isFull(int size)
{
    if(top==size-1)
    {
        return true;
    }
    return false;
 
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}