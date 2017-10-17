//Programa que calcula la suma de numeros pares del 1 al 20
//Fernando Garza Landa
//17/10/17

#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;
  while (count<21)
    {
      if ((count%2)<=0)
	{
	  sum=sum+count;
	}
      count++;
    }
  cout<<"Suma"<< sum << endl;
  return 0;
}
