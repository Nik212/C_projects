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
void search_elem(struct Node *p, int a)
{   
    while (p)
    {
        if (a == p->data)
        {
            printf("found! The address is %p\n", p->next);
            return ;
        }
        p = p->next;
    }
    printf("Not found :(\n");
    return ;
    
}
int main()
{
    int A[] = {3, 5, 7, 10, 15};

    create(A, 5);
    search_elem(first, 228);
    return (0);
}