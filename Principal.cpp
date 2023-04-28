#include <iostream>
#include "funciones.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int op=0, num, numtabla,cantidad[MAX];  
    cout << "Opciones" << endl;
    cout << "1. Leer un numero y saber si es un numero primo.\n";
    cout << "2. Leer una lista de varios números ingresados por el estudiante y decir cuántos números son pares, impares y neutro\n.";
    cout << "3. Leer un numero e imprimir los siguientes 10 números múltiplos de 3\n.";
    cout << "4. Salir\n";
    cout << "Digite una opc: ";

    while(op!=5){
    switch (op)
    {
    case 1:
        esPrimo (num);        
        break;
        system("pause");
    case 2:
        listaNum (num);
        break;
         system("pause");
    case 3:
        numMultiplo3(numtabla, cantidad);
        break;
         system("pause");
    
    default:
        cout << "Esta no es un op correcta";
        break;
        system("cls");
         system("pause");
    }    

    return 0;
    }
}

