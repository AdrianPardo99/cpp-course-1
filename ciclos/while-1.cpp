#include <iostream>

using namespace std;

int main(void){
  int v;
  bool o=true;
  while(o){
    cout<<"Ingresa un entero positivo: ";
    cin>>v;
    if(v>0){
      cout<<"El valor cuadratico es: "<<v*v<<"\n";
    }else{
      cout<<"El valor es negativo\nEl valor cuadratico es: "<<v*v<<"\n";
      o=false;
    }
  }
  return 0;
}
