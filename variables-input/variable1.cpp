#include <iostream>
using namespace std;

int main(void){
  int a;
  float b;
  double c;
  char d;
  string e;
  cout<<"Hola, por favor ingresa un numero entero: ";
  cin>>a;
  cout<<"Ahora por favor ingresa un numero real: ";
  cin>>b;
  cout<<"Ahora por favor ingresa otro numero real: ";
  cin>>c;
  cout<<"Ingresa un caracter: ";
  cin>>d;
  getchar();
  cout<<"Ingresa por favor tu nombre: ";
  getline(cin,e);
  cout<<"Los datos ingresados son los siguientes:\n"<<
  "int\t"<<a<<"\nfloat\t"<<b<<"\ndouble\t"<<c<<"\nchar\t"<<d<<
  "\nString\tHola "<<e<<"\n";
  return 0;
}
