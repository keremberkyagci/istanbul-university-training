#include <stdio.h>
#include<ctype.h>  //açıklamaya bak asagı

int main (){

char unit;
float temp;
printf ("\n Sicaklik birimini giriniz(F) veya (C):");
scanf ("%c",&unit);

unit = toupper(unit); //buyuk kucuk harf duyarlılıgını kaldırma işlemi yaptık

if (unit == 'C'){
   printf("\nCelcius cinsinden sicakligi giriniz:");
   scanf ("%f", &temp);
   temp = (temp * 9/5) + 32 ;
   printf ("\n Sicaklik fahreneit cinsinden %.1f",temp);
}
else if (unit == 'F')
{
   printf("\nFahrenenit cinsinden sicakligi giriniz:");
   scanf ("%f", &temp);
   temp = ((temp - 32)*5) / 9 ;
   printf("\n Sicaklik celsius cinsinden %.1f",temp);
}
else {
    printf("\n %c gecerli bir birim degil ",unit);
}


    return 0;

}