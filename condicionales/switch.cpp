#include <iostream>

using namespace std;

int main(void){
  int var,op;
  cout<<"Ingresa un valor entero: ";
  cin>>var;
  cout<<"Ingresa algunas de las siguientes opciones:\n"<<
  "1. Muestra el valor cuadrático del entero ingresado\n"<<
  "2. Muestra el doble del entero ingresado\n"<<
  "3. Muestra la mitad del valor entero ingresado\n";
  cin>>op;
  switch (op) {
    case 1:
      cout<<"var="<<var<<"\tvar^{2}="<<var*var<<"\n";
    break;
    case 2:
      cout<<"var="<<var<<"\tvar*2="<<var*2<<"\n";
    break;
    case 3:
      cout<<"var="<<var<<"\tvar/2="<<var/2<<"\n";
    break;
    default:
      cout<<"Opcion no encontrada...\n";
  }
  return 0;
}
