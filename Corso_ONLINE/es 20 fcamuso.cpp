#include <iostream>
#include <cmath>
using namespace std;
// VEDI LEZIONE FUNZIONI dal n°64 al n°71 fcamuso
//SIA NEL FUORI E DENTRO AL MAIN HO LO STESSO INDIRIZZO


int sommavett(int v[],int numero)
//in uscita avremo un indirizzo
{
    cout <<"NELLA FUNZIONE: "<< &numero<<endl;
    int somma=0;
    for (int i;i<numero;i++)
        somma+=v[i];
    return somma;
}

int main()
{
    int v[] = {4,8,1,34,78};
    int numero=5;
    cout << "NEL MAIN: " << &numero << endl;
    cout << sommavett(v,) << endl;
    return 0;
}






