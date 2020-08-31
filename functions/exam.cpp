#include <iostream>

using namespace std;

/* A la hora de escribir es necesario describir inicialmente las funciones
    antes del main ya que permite en la construccion del ensamblador
    del lenguaje primero pone en el ensamblador de arriba hacia abajo
    acomodando las funciones hasta que la funcion principal queda en
    la cima
*/
double integerToDouble(int);
bool isBaseTwo(int);
bool isPar(int);
double divTwo(double);
int divTwo(int);


int main(void){
  int a;
  cout<<"Ingresa un numero entero: ";
  cin>>a;
  cout<<"\nEl valor ingresado es base 2, es decir, 2^{n}?\n";
  if(isBaseTwo(a)){
    cout<<"\tEs un valor que pertenece a 2^{n}\n";
  }else{
    cout<<"\tNo es un valor que pertenece a 2^{n}\n";
  }
  cout<<"\nLa mitad del valor es un numero entero?\n";
  if(isPar(a)){
    cout<<"\tSi es un valor entero y es: "<<divTwo(a);
  }else{
    cout<<"\tNo es un valor entero,\n\t  este contiene decimal es: "<<divTwo(integerToDouble(a));
  }
  return 0;
}

/* Pasar de un valor entero a un valor double */
double integerToDouble(int a){
  return (double)a;
}

/* Verificar si un valor esta escrito/descrito en base 2 */
bool isBaseTwo(int n){
  return (n&(n-1))==0;
}

/* Verifica si es un numero par */
bool isPar(int n){
  return (n%2)==0;
}

/* Obtiene la mitad de cualquier valor */
double divTwo(double d){
  return d/2;
}

/* Obtiene la mitad de cualquier valor */
int divTwo(int n){
  return n/2;
}
