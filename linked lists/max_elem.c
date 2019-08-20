#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    /* data */
}*first = 0; // creating a global pointer

void create(int A[], int n)
{
    int i = 1;
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = 0;
    last = first; // указатель для смены в цикле
    
    while (i < n)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i++];
        t->next = 0;
        last->next = t;
        last = t;
    }
}
void max_elems(struct Node *p)
{
    int max = 0;
    
    while (p)
    {
        if (max <= p->data)
            max = p->data;
        p = p->next;
    }
    
}

void recursive_display(struct Node *p)
{
    if (p)
    {
        printf("%d", p->data);
        recursive_display(p->next);
    }
    else
        printf("No list");

}

int main()
{
    int A[] = {3, 5, 7, 10, 15};

    create(A, 5);
    max_elems(first);
    return (0);
}