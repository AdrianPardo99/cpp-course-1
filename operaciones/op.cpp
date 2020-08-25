#include <iostream>

using namespace std;

int main(void){
  float a=10.5f;
  int b=10,c=30;
  cout<<"División entera (b/c): "<<b/c<<"\nModulo (b%c): "<<b%c<<
  "\nDivision (a/b): "<<a/b<<"\nMultiplicación a*c: "<<a*c<<
  "\nSuma a+c: "<<a+c<<"\n";
  int b2=128;
  cout<<"\n\nOperaciones lógicas\nValor original b2: "<<b2<<"\n";
  cout<<"b2&(b2-1) (Esta operación te puede servir para saber si un número "<<
  "esta en base 2, devolviendo 0 si es un numero 2^{n}): "<<(b2&(b2-1))<<"\n";
  cout<<"b2|(b2-1): "<<(b2|(b2-1))<<"\n";
  cout<<"(~b2)&0xFF: "<<((~b2)&0xFF)<<"\n";
  cout<<"((~b2)&0xFF)^0xF0: "<<(((~b2)&0xFF)^0xF0)<<"\n";
  return 0;

}
