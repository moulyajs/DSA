#include <stdio.h>
#include <stdlib.h>

void union_of_sorted_arrays(int a[], int b[], int n, int m) {
    int *uni = (int *)malloc((n + m) * sizeof(int)); 
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (k == 0 || uni[k - 1] != a[i]) {
                uni[k++] = a[i];
            }
            i++;
        } else if (a[i] > b[j]) {
            if (k == 0 || uni[k - 1] != b[j]) {
                uni[k++] = b[j];
            }
            j++;
        } else { 
            if (k == 0 || uni[k - 1] != a[i]) {
                uni[k++] = a[i];
            }
            i++;
            j++;
        }                          //tc :- O(n+m)   sc :- O(n+m)
    }

    
    while (i < n) {
        if (k == 0 || uni[k - 1] != a[i]) {
            uni[k++] = a[i];
        }
        i++;
    }
    while (j < m) {
        if (k == 0 || uni[k - 1] != b[j]) {
            uni[k++] = b[j];
        }
        j++;
    }

    
    for (int l = 0; l < k; l++) {
        printf("%d ", uni[l]);
    }
    printf("\n");

    free(uni); 
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    union_of_sorted_arrays(a, b, n, m);

    return 0;
}
