#include<stdio.h>

int le_maximum (){

int a , b , max ;

printf("entrernla valeure a : \n") ;
scanf("%d", &a ) ;
printf("entrernla valeure b : \n");
scanf("%d", &b );
   if ( a < b )
   {
       //printf("le max est %d" , b) ;
       return b ;
   }
   else{
     //printf("le max est %d" , a) ;
     return a ;
   }
return 0 ;
}

int main () {

    int MAX = le_maximum() ;
    printf(" le maximum est %d" , MAX ) ;

    return 0 ;
}
