#include <stdio.h>

int main() {

  int n , i , arr[100] ;
  int min ;
  printf("entrer le nombre des element : ") ;
  scanf ("%d" , &n) ;
  printf (" n =  %d \n" , n) ;

  for ( i = 0 ; i < n ; i++ ) {
    printf(" entrer les valeurs de tableaux :\n" ) ;
    scanf ("%d" , &arr[i]) ;
         }
   min = arr[0] ;
  for  ( i = 1 ; i < n ; i++ )  {
        if ( min > arr[i]) {
            min = arr[i] ;
        }
  }
        printf (" le min est %d", min) ;

return 0;
}
