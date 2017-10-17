//Programa que calcula la suma de numeros impares del 1 al 10
//Fernando Garza Landa
//17/10/17

#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;
  while (count<10)
    {
      if ((count%2)>0)
	{
	  sum=sum+count;
	}
      count++;
    }
  cout<<"Suma"<< sum << endl;
  return 0;
}
