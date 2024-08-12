#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void findSecondLargest(int a[], int n);
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    findSecondLargest(a, n);
    return 0;
}
void findSecondLargest(int a[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            m++;
        }
    }
    if (m >= 2)
    {
        int temp;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
        printf("%d", a[n - 1]);
    }
    else
    {
        printf("%d", -1);
    }
}
