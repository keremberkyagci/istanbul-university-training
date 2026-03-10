#include<stdio.h>
int main(){

 char operator ;  //işlemi yönlendircek
 double num1 ;    //1. sayı
 double num2 ;    //2. sayı
 double result ;  //sonuç değişkenimiz

printf("\nHangi islemi yapmak istiyorusun ?(+,-,*,/):");
scanf("%c",&operator);

printf("\nBirinci sayiyi giriniz:");
scanf("%lf",&num1);

printf("\nIkinci sayiyi giriniz:");
scanf("%lf",&num2);

switch (operator)
{
case '+':
    result = num1 + num2 ;
    printf ("%.2lf",result);
    break;
case '-':
    result = num1 - num2 ;
    printf("%.2lf",result);
    break;
case '*':
    result = num1 * num2 ;
    printf("%.2lf",result);
    break;
case '/':
    result = num1 / num2 ;
    printf("%.2lf" , result);
default:
printf("\n%c gecerli bir islem degil,lutfen gecerli bir islem turu giriniz",operator);
    break;
}






    return 0;
}