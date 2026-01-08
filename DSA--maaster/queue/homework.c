// DECENDING ORDER PRIORITY QUEUE
#include<stdio.h>
 #define size 5
 int pq[size];
 int n=0;

 void insert( int value)
 {
    int i;
    if(n==size)
    {
        printf("Priority Queue Overflow\n");
        return;
    }

    for(i=n-1;i>=0 && pq[i]< value;i--)
    {
        pq[i+1]=pq[i];
    }
    pq[i+1]=value;
    n++;
}

void delete() {
    if(n==0)
    {
        printf("Priority queue underflow\n");
        return ;
    }
    printf("Deleted element:%d\n\n",pq[0]);
    for (int i = 0; i < n-1; i++)
        pq[i]=pq[i+1];
        n--;
}
    void display()
    {
        for (int i = 0; i < n; i++)
            printf("%d ", pq[i]);
            printf("\n");    
        
    }

int main()
{
    insert(30);
    insert(10);
    insert(50);
    insert(20);
    display();
    delete();
    display();

    return 0;
}