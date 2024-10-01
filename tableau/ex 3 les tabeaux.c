#include <stdio.h>

int main() {

  int n , i , arr[100] ;
  int max ;
  printf("entrer le nombre des element : ") ;
  scanf ("%d" , &n) ;
  printf (" n =  %d \n" , n) ;

  for ( i = 0 ; i < n ; i++ ) {
    printf(" entrer les valeurs de tableaux :\n" ) ;
    scanf ("%d" , &arr[i]) ;
         }
   max = arr[0] ;
  for  ( i = 1 ; i < n ; i++ )  {
        if ( max < arr[i]) {
            max = arr[i] ;
        }
  }
        printf (" le max est %d", max) ;

return 0;
}
