#include <iostream>

using namespace std;

int main(void){
  int var;
  cout<<"Ingresa un valor entero: ";
  cin>>var;
  if(var>0){
    cout<<"Es un valor entero positivo\n";
  }else{
    cout<<"Es un valor entero no positivo\n";
  }
  return 0;
}
