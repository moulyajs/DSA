#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int x = 5;
    int *y = &x;
    printf("%d", x);
    printf("\n");
    printf("%u", &x);
    printf("\n");
    printf("%u", *y);
    printf("\n");
    printf("%u", &y);
}
*/
/*
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}
int i = 0, j = 1;
int main()
{
    f(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}
*/
/*
int main()
{
    int a[0];
    a[0] = 10;
    printf("%d", *a);
}
*/
/*
void main()
{
    char c[] = "GATE2011";
    char *p = c;
    printf("%s", p + p[3] - p[1]);
}
*/
/*
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    disp(&a[0], 5);
}

void disp(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        ++*a;
    }
    printf("the values of the array..\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
*/
/*
int main()
{
    int i = 161;
    int *j = 161;
    printf("%d %d\n", i, j);
    printf("%d\n", i++);
    printf("%d\n", j++);
    printf("%d %d\n", i, j);
}
*/
/*
int main()
{
    int a[] = {1, 2, 3};
    int *ptr;
    ptr = a;
    ptr += 2;
    printf("%d", *ptr);
}
*/
/*
void main()
{
    struct a
    {
        int x;
        float y;
    };
    struct a p;
    p.x = 10;
    p.y = 5.5;
    printf("%d %f", p.x, p.y);
}
*/
/*
void A(int n);
int main()
{
    int n = 3;
    A(n);
}
void A(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        A(n - 1);
    }
}
*/
/*
void B(int n);
int main()
{
    int n = 3;
    B(n);
}
void B(int n)
{
    if (n > 0)
    {
        B(n - 1);
        printf("%d", n);
        B(n - 1);
    }
}
*/
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *p1, *p2, *p3, *head;
    p1 = (struct node *)malloc(sizeof(struct node));
    p2 = (struct node *)malloc(sizeof(struct node));
    p3 = (struct node *)malloc(sizeof(struct node));
    p1->data = 10;
    p1->link = p2;
    p2->data = 20;
    p2->link = p3;
    p3->data = 30;
    p3->link = NULL;
    head = p1;
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->link;
    }
}