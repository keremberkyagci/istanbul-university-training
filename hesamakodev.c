#include <stdio.h>

int main (){

 char islem;
 double sayi1;
 double sayi2;
 double sonuc;
 printf("Merhabalar lutfen yapmak istediginiz islemi seciniz(+,-,*,/):");
 scanf("%c",&islem);
 
 printf("1.sayiyi giriniz:");
 scanf ("%lf",&sayi1);

 printf("2.sayiyi giriniz:");
 scanf ("%lf",&sayi2);
 
 switch (islem)
 {
 case '+':
    sonuc = sayi1 + sayi2;
    printf("=%.2lf",sonuc);
    break;
 
 case '-':
    sonuc = sayi1 - sayi2 ;
    printf("=%.2lf",sonuc);
    break;

 case '*':
    sonuc = sayi1 * sayi2 ;
    printf("=%.2lf",sonuc);
    break;

 case '/' :
    sonuc = sayi1 / sayi2 ;
    printf("=%.2lf",sonuc);   
 break;

    default:
    break;
 }


    return 0;
}