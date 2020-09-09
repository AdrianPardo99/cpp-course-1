#include "definiciones.h"

int suma(int a,int b){
  return a+b;
}

int resta(int a,int b){
  return suma(a,-b);
}

int multiplicacion(int a, int b){
  int t=0,i;
  for(i=0;i<b;i=suma(i,1)){
    t=suma(t,a);
  }
  return t;
}

int division(int a,int b){
  int t=0;
  while(a>=b&&a>=0){
    a=resta(a,b);
    t=suma(t,1);
  }
  return t;
}

int pot(int a,int b){
  int t=1,i;
  if(b<=0){
    return t;
  }
  for(i=0;i<b;i=suma(i,1)){
    t=multiplicacion(t,a);
  }
  return t;

}
