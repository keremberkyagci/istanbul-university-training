#include <stdio.h>

int main (){

 int r ;
 int a ;
 int c ;
 int pi = 3 ;

 printf ("Merhabalar simdi daire alani ve cevresini hepsalpayacagizz \n simdi bize bir yaricap lazim \n lutfen bir yaricap giriniz = ") ;
 scanf ("%d",&r);

 a = pi*r*r ;
 c = 2*pi*r ;
 printf("dairenin cevresi = %d dir \n", c);
 printf("dairenin alani = %d dir", a); 
 


 return 0;
}