#include "definiciones.h"

/* Calculadora de numeros enteros a partir de puras sumas
 * Resta es una suma con signo inverso a+(-b)
 * Multiplicación sucesion de sumas de "a" hasta "b"
 * Division cuantas veces "b" cabe en "a" (O cuantas veces "b" puede ser restada en "a")
 */

int main(void){
  int i=20,j=2;
  cout<<"Suma de 20+2= "<<suma(i,j)<<
        "\nResta de 2-20= "<<resta(j,i)<<
        "\nMultiplicación 20*2= "<<multiplicacion(i,j)<<
        "\nDivision 20/2= "<<division(i,j)<<
        "\nDivision 2/20= "<<division(j,i)<<"\n";
  return 0;
}
