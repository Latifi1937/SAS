#include<stdio.h>

int multiplication(){

int a , b , m ;

printf("entrernla valeure a : \t") ;
scanf("%d", &a ) ;
printf("entrernla valeure b : \t");
scanf("%d", &b );
   m = a * b ;
return m ;
}

int main () {

    int M = multiplication() ;
    printf(" la somme = %d" , M ) ;

    return 0 ;
}
