#include <iostream>
#define MAX 10

using namespace std;

bool esPrimo (int num);
int listaNum (int num);
int numMultiplo3(int num, int cantidad[MAX]);

bool esPrimo(int num)
{
cout << "Dime un # y te dire si es primo";
cin >> num;

  if (num == 0 || num == 1 || num == 4) return false;
  for (int x = 2; x < num / 2; x++) 
  {
    if (num % x == 0) return false;
  }
 
  return true;
}
  

int listaNum(int num)
{
    
    int listanum[MAX];

    int pos = 0;

    listanum[pos];
    pos++;

 for (int i = 0; i < pos; i++)
 {
    cout << listanum[i]<<endl;
 }
 return 0;
}

int numMultiplo3(int numtabla, int cantidad[MAX])
{
 cout << "Dame un numero y yo te dare los proximos 10 multiplos 3" << endl;
 cout << "Dame un #: ";
 cin >> numtabla;
 for (int i = numtabla; i < cantidad[MAX]; i++)
 {
    if(i==3){
    cout << i << endl;
    i++;
    }
    else{
    i++;
    }
 }
 
}