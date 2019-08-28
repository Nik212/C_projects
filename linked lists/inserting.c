/* Inserting new nodes */
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
void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
void create_one(struct Node *last_elem, int a)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = a;
    t->next = 0;
    last_elem->next = t;
}

void append(struct Node *p, int a)
{
    struct Node *q;   
    while (p != 0)
    {
      q = p;
      p = p->next;
    }
    create_one(q, 228);
    return ;
    
}
int main()
{
    int A[] = {3, 5, 7, 10, 15};

    create(A, 5);
    display(first);
    printf("\n");
    append(first, 228);
    display(first);
    return (0);
}