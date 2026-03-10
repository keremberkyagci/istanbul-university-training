#include <stdio.h>
#include <math.h>

int main () {

double A;
double B;
double C;

printf("\n A kenarini giriniz: ");
scanf ("%lf", &A);
printf("n 8 kenarini giriniz: ");
scanf("%lf", &B);

C = sqrt(A*A + B*B);
printf("C kenarinin uzunlugu = %.2lf", C);


    return 0;
}