#include<stdio.h>

int le_minimum (){

int a , b , min ;

   printf("entrer la valeure a : \t") ;
   scanf("%d", &a ) ;
   printf("entrer la valeure b : \t");
   scanf("%d", &b );
   if ( a > b )
   {
       printf("le min est %d\n" , b) ;
   }
   else{
     printf("le min est %d\n" , a) ;
   }
return min ;
}

int main () {
    int a , b ;
    int MIN = le_minimum( int min ) ;

    printf("le min est %d " , MIN) ;



    return 0 ;
}
