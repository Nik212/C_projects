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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d", p->data);
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
int asccending(int a, int b)
{
    return (a<=b);
}
void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}
struct Node *sort(struct Node *lst)
{
    struct Node *last = lst;
    struct Node *start;

    start = lst;
    lst = lst->next;
    while (lst)
    {
        if (!(asccending(last->data, lst->data)))
            ft_swap(&lst->data, &last->data);
        last = lst;
        lst = lst->next;
        // [] ---> [5, 0] --> [3, 1] --> [7, 2] // lst = [] '' if lst->data = 1 >= 1->data = 2 then lst->data
    }
    return (start);
}

int main()
{
    int A[] = {5, 7, 10, 3, 4};

    create(A, 5);
    sort(first);
    return (0);
}