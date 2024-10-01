#include<stdio.h>

int factorielle( int f ){

  int i , n ;

  printf("entrer un nombre entier  \n") ;
  scanf("%d" , &n) ;
  f = 1 ;
  for (i = 1 ; i <= n ; i++) {

    f = f * i ;
  }
     return f ;
}

int main () {
    int f ;
    int F = factorielle(f) ;

    printf("le factorielle est %d " , F ) ;



    return 0 ;
}
