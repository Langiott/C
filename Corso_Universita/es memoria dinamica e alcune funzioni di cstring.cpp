#include <iostream>
#include <cstring>
//contiene le funzioni STRLEN e STRCPY
using namespace std;

int main()
{
    cout << "SCRIVI UNA STRINGA: ";
    char str[1000];
    //ci assicuriamo che la stringa non dia problemi
    cin >> str;
    int lung=strlen(str);
    //ottiene la lunghezza di str
    cout << "IL NOSTRO CARATTERE SARA' LUNGO " << lung<<" CARATTERI\n";
    char* p= new char [lung+1];
    //alloca dinamicamente spazio per la stringa str
    strcpy(p,str);
    //copia str a p
    cout << "p= " <<p <<endl;
    delete [] p;

    cout << "p= " <<p <<endl;
    //cancella cioè che sta dentro p, teoricamente dio porco
    cout <<"------------------------------------------------\n";
    cout << "QUANTI ELEMENTI HA IL NOSTRO VETTORE??\n";
    int i;
    cin>>i;
    int* f= new int[i];
    for(int n=0;n<i;n++) f[n]=n+1;
    for(int n=0;n<i;n++) cout << " " << f[n];
    cout <<endl;
    cout << "1: "<< *(f+0) <<"---> *(f+0)" <<endl;
    cout << "2: "<< *(f+1) <<"---> *(f+1)" <<endl;
    cout << "3: "<< *(f+0) <<"---> *(f+3)" <<endl;
    cout <<endl;
    cout << "PUNTATORE NON CANCELLATO *(f+1)--->  " << *(f+1) <<endl;
    delete [] f;
    cout << "PUNTATORE CANCELLATO     *(f+1)--->  " << *(f+1) <<endl;
    return 0;

}
