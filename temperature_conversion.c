#include <stdio.h>

float fconvert (float Tc){

 float Tf = (Tc*9.0/5.0)+32.0;

 return Tf;
}

int main()
{
 float Tc, Tf;

 printf("Escreva sua temperatura em graus célcius: \n");
 scanf ("%f", &Tc);
 
 Tf = fconvert (Tc);
 
 printf ("Sua temperatura em graus farenheit é igual a: %.1f", Tf);

 return 0;
}
