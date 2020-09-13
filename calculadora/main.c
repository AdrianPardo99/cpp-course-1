#include "definiciones.h"

/* Calculadora de numeros enteros a partir de puras sumas
 * Resta es una suma con signo inverso a+(-b)
 * Multiplicación sucesion de sumas de "a" hasta "b"
 * Division cuantas veces "b" cabe en "a" (O cuantas veces "b" puede ser restada en "a")
 * Potencia sea "b" que se multiplica "b" misma "a" siendo que a>=0
 */

int main(void){
  int i=20,j=2;
  cout<<"Suma de 20+2= "<<suma(i,j)<<
        "\nResta de 2-20= "<<resta(j,i)<<
        "\nMultiplicación 20*2= "<<multiplicacion(i,j)<<
        "\nDivision 20/2= "<<division(i,j)<<
        "\nDivision 2/20= "<<division(j,i)<<
        "\nPotencia 2^{20}= "<<pot(j,i)<<
        "\nPotencia 3^{4}= "<<pot(3,4)<<
        "\nDivision 20/-2= "<<division(i,-j)<<
        "\nDivision -20/2= "<<division(-i,j)<<
        "\nDivision -20/-2= "<<division(-i,-j)<<
        "\nMultiplicación 20*-2= "<<multiplicacion(i,-j)<<
        "\nMultiplicación -20*2= "<<multiplicacion(-i,j)<<
        "\nMultiplicacion -20*-2= "<<multiplicacion(-i,-j)<<
        "\nPotencia -2^{3}= "<<pot(-j,j+1)<<
        "\nPotencia -2^{2}= "<<pot(-j,j)<<
        "\n";
  return 0;
}
