#include <iostream>

using namespace std;

int main(void){
  int *arr=new int[10],i;
  arr[0]=0;
  arr[1]=1;
  for(i=2;i<10;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
  cout<<"Serie de Fibonacci: \n";
  for(i=0;i<10;i++){
    cout<<arr[i]<<"\n";
  }
  return 0;
}
