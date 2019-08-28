/* Finding a value using Linear Seach */
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

void recursive_display(struct Node *p)
{
    if (p)
    {
        printf("%d", p->data);
        recursive_display(p->next);
    }
}

struct Node *recursive_search(struct Node *p, int key)
{
    if (p == 0)
        return (0);
    if (key == p->data)
        return (p);
    recursive_search(p->next, key);
}

void improved_linsearch(struct Node *p, int key)
{
    struct Node *q = 0;

    while (p != 0)
    {
        if (key == first->data)
            return ;
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}
int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    int A[] = {3, 5, 7, 10, 15};
    struct Node *p;
    create(A, 5);
    recursive_display(first);
    printf("\n");
    improved_linsearch(first, num);
    recursive_display(first);
    printf("\n");
    return (0);
}