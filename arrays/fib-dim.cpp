#include <iostream>

using namespace std;

int main(void){
  int i,o;
  cout<<"Ingresa un numero entero mayor a 2: ";
  cin>>o;
  int *arr=new int[o];
  arr[0]=0;
  arr[1]=1;
  for(i=2;i<o;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
  cout<<"Serie de Fibonacci: \n";
  for(i=0;i<o;i++){
    cout<<arr[i]<<"\n";
  }
  return 0;
}
