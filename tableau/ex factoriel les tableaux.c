#include <stdio.h>

int main() {
    int n, i, arr[100];

    printf("Entrer le nombre des éléments : ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    for (i = 0; i < n; i++) {
        printf("Entrer la valeur de arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int f = 1;
        for (int j = 1; j <= arr[i]; j++) {
            f *= j;
        }
        printf("Le facteuriel de arr[%d] est %d\n", i, f);
    }

    return 0;
}

