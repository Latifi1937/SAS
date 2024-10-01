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
    int m = 1;
    for (i = 0; i < n; i++) {
         m *= arr[i] ;
        printf("Le miltiplication de arr[%d] est %d\n", i, m)  ;
    }

    return 0;
}

