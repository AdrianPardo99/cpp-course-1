#include <iostream>

using namespace std;

int main(void){
  int a=0,b=1,i,c;
  cout<<"Termino[0]\t=\t"<<a<<"\nTermino [1]\t=\t"<<b<<"\n";
  for(i=0;i<20;i++){
    cout<<"Termino ["<<i+2<<"]\t=\t"<<a+b<<"\n";
    /* Intercambio de datos */
    c=b;
    b=a+b;
    a=c;
  }
  return 0;
}
