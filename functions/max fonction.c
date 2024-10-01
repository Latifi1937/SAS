#include<stdio.h>

int min (int tab[7] ){

int i ;
int min ;

     min = tab[0] ;
     for ( i = 1 ; i < 7 ; i++) {
         if ( tab[i] > min) {
             min = tab[i] ;
         }

     }

return min ;
}

int main () {
    int  arr[7] = { 1 , 17 , 97 , 44 , 102 , 109 , 873 } ;
    int   MIN = min(arr) ;

    printf("le minimum est %d " , MIN ) ;



    return 0 ;
}
