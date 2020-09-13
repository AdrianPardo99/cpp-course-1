#include "definiciones.h"

/*
 * @params a es un entero el cual es utilizado para la suma
 * @params b es un entero el cual es utilizado para la suma
 */
int suma(int a,int b){
  return a+b;
}

/*
 * @params a es un entero el cual es utilizado para la resta
 * @params b es un entero el cual es utilizado para la resta
 *           - b pasa como un valor negativo de la suma para este
 *             operar como una suma normal.
 */
int resta(int a,int b){
  return suma(a,-b);
}

/*
 * @params a es un entero el cual es utilizado para la multiplicación
 * @params b es un entero el cual es utilizado para la multiplicación
 *           - La multiplicación es definida como una serie de sumas de a
 *             las cuales se realizan b veces cuidando los signos que son
 *             operados.
 */
int multiplicacion(int a, int b){
  int t=0,i;
  bool c=false,d=false;
  if(a<0 || b<0){
    if(a<0){
      c=!c;
      a=-a;
    }
    if(b<0){
      d=!d;
      b=-b;
    }
  }
  for(i=0;i<b;i=suma(i,1)){
    t=suma(t,a);
  }
  if((!c && d)||(c && !d)){
    t=-t;
  }
  return t;
}

/*
 * @params a es un entero el cual es utilizado para la división
 * @params b es un entero el cual es utilizado para la división
 *           - Recordemos la definición de la división, es cuantas veces a
 *             puede ser restado por b y se devuelve el valor de cuantas veces
 *             b resto al valor a.
 */
int division(int a,int b){
  int t=0;
  bool c=false,d=false;
  if(b<0 || a<0){
    if(b<0){
      c=!c;
      b=-b;
    }
    if(a<0){
      d=!d;
      a=-a;
    }
  }else if(b==0){
    cout<<"Error no divisible a with zero\n";
    return 0;
  }
  while(a>=b&&a>=0){
    a=resta(a,b);
    t=suma(t,1);
  }
  if((c&&!d)||(!c&&d)){
    t=-t;
  }
  return t;
}

/*
 * @params a es un entero el cual es utilizado para la potencia
 * @params b es un entero el cual es utilizado para la potencia
 *           - Recordemos que la potencia es una serie de multiplicaciones de a
 *             así misma de a una cantidad de b veces, recordando que si b es 0
 *             el valor de retorno es 1.
 */
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
