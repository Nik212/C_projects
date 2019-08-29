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

void add_first(struct Node *p, int a)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = a;
    t->next = p;
    first = t;
}

void add(struct Node *p, int a, int index)
{
    int len = 0;
    int i = 0;
    struct Node *q;
    struct Node *t;
    q = p;

    while (q)
        {
            q = q->next;
            len++;
        }
    if (len == 0)
    {
        create_one(p, a);
        return ;
    }
    while (i <= len-1)
    {
        if (i == index)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = a;
            t->next = p->next;
            p->next = t;
            return ;
        }
        i++;
        p = p->next;
    }
}

int main()
{
    int A[] = {3,4,5};

    create(A, 3);
    display(first);
    printf("\n");
    //append(first, 228);
    add(first, 878, 2);
    display(first);
    return (0);
}