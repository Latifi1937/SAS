#include<stdio.h>

int fibonacci(int f){

int a , b , i , fn ;

    a = 0 ;
    b = 1 ;
   fn = a + b ;
   if ( f <= 1 ){
    return fn ;
   }
    for ( i = 2 ; i <= f ; i++ ){
        fn = a + b ;
        a = b ;
        b = fn ;
    }

return fn ;
}
int main () {

      int n ;
      printf("entre le nombre n :\n") ;
      scanf ("%d" , &n) ;
      int F = fibonacci(n) ;
      printf ("alors le resultat est %d" , F) ;

}
