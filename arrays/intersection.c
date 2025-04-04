#include <stdio.h>
#include <stdlib.h>

void intersection_of_sorted_arrays(int a[], int b[], int n, int m) {
    int i = 0, j = 0, k = 0;
    int *c = (int*)malloc((n < m ? n : m) * sizeof(int)); 

    if (c == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {                            //tc :- O(n+m)  sc :- O(1)
            if (k == 0 || c[k - 1] != a[i]) {  
                c[k++] = a[i];
            }
            i++;
            j++;
        }
    }

    
    for (int l = 0; l < k; l++) {
        printf("%d ", c[l]);
    }
    printf("\n");

    free(c); 
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

    intersection_of_sorted_arrays(a, b, n, m);

    return 0;
}
