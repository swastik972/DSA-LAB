#include <stdio.h>
#define MAX 10

int pq[MAX];
int size = 0;

/* Insert element in descending order */
void insert(int value)
{
    int i;
    if (size == MAX)
    {
        printf("Priority Queue is Full\n");
        return;
    }

    for (i = size - 1; i >= 0 && pq[i] < value; i--)
    {
        pq[i + 1] = pq[i];
    }

    pq[i + 1] = value;
    size++;
}

/* Delete highest priority element */
void delete()
{
    if (size == 0)
    {
        printf("Priority Queue is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", pq[0]);

    for (int i = 0; i < size - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    size--;
}

/* Display the queue */
void display()
{
    if (size == 0)
    {
        printf("Priority Queue is Empty\n");
        return;
    }

    printf("Priority Queue (Descending Order): ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", pq[i]);
    }
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
