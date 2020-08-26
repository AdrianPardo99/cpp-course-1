#include <iostream>

using namespace std;

int main(void){
  int var;
  cout<<"Ingresa un valor entero: ";
  cin>>var;
  if(var>0){
    cout<<"Es un valor entero positivo\n";
  }else if(var<0){
    cout<<"Es un valor entero negativo\n";
  }else{
    cout<<"El valor es cero\n";
  }
  return 0;
}
