#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(int x)
{
 //to check the overflow.
 if(top==N-1)
 {
    printf("Overflow is detected.\n");
 }
 else
 {
    top++;
    stack[top]=x;
    printf("Pushed: %d\n", x);
 }
}

void pop(){
    int item;
    if(top==-1)
    {
        printf("No data in stack,underflow detected.\n");
    }
    else{
        item=stack[top];
        top--;
        printf("Popped element: %d\n",item);
    }

}
//seeing topmost  element at the top of stack wthout removing it 

void peek(){
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        printf("Top element: %d\n",stack[top]);
    }

}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}



void main()
{
    printf("=== Stack Operations Demo ===\n\n");
    
    push(10);
    push(20);
    push(30);
    
    printf("\n");
    display();
    
    printf("\n");
    pop();
    
    printf("\n");
    peek();
    
    printf("\n");
    display();
}