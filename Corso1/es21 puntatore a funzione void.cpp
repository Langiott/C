#include <iostream>
using namespace std;

int addizione (int a, int b){return a+b;}
int sottrazione (int a, int b){return a-b;}

int operazione (int a,int b , int (*FunzioneDalanciare) (int,int))
//int (*funzioneDalanciare)(int,int) è il 3°parametro ed è di
// tipo puntatore a funzione
{
    int g;
    g = (*FunzioneDalanciare)(x,y);
    return (g);
}
int main()
{
    int m,n;
    int(*Meno)(int,int)=sottrazione;//puntatore a funzione
    m= operazione(7,5,addizione);
    n= operazione(20,m,Meno);
    cout << n << endl;
    return 0;
}
//DEVE STAMPARE 8 IN USCITA

