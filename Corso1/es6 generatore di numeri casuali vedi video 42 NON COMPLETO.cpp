#include <iostream>
#include <cstdlib> //rand() srand()
#include <ctime>   //time

using namespace std;

int main()
{
    //contiamo quante volte è necessario
    //lanciare un dato simulato perchè esca
    //per tre il numero 6.
    //cout<<rand()<<endl; il generatore
    //restituisci un numero a caso es 2999
    //ma non è consono al nostro programma quindi...
    cout<< "I generatori estraggono un numero casuali"<<endl;
    cout<< "Il primo generatore di numeri causuali estrae il numero:   " << rand() <<endl;
    cout<< "Il secondo generatore di numeri causuali estrae il numero: " << rand() <<endl;
    cout<< "Il numero massimo estratto sara:"<<RAND_MAX<<endl;
    cout <<endl;
    cout<< "I generatori estraggono un numero minore o uguale a 6"<<endl;
    cout<< "Il primo generatore di numeri causuali estrae il numero:   " << rand()%6<<endl;
    cout<< "Il secondo generatore di numeri causuali estrae il numero: " << rand()%6+1<<endl;
    cout<< "Il numero massimo estratto sara:"<<(RAND_MAX%6)<<endl;
    return 0;
}
