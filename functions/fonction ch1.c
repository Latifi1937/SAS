#include<stdio.h>

int somme(){

int a , b , s ;

printf("entrernla valeure a : \t") ;
scanf("%d", &a ) ;
printf("entrernla valeure b : \t");
scanf("%d", &b );
 s = a + b ;
return s ;
}

int main () {

    int S = somme() ;
    printf(" la somme = %d" , S) ;

    return 0 ;
}
