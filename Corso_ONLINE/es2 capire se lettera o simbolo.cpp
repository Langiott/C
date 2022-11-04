#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char y=' ';
    cout<< "Il programma capirà se il simbolo da voi impostato sarà una lettera dell'alfabeto oppure no"<<endl;
    cout<< "Inserire una lettera o simbolo: ";
    cin >> y;
    char x = tolower(y);
    /*TRASFORMERA' LA LETTERA INSERITA ALL'INIZIO DA UNA LETTERA MINUSCOLA IN MINUSCOLA E DA MAIUSCOLA A MINUSCOLA,
    LA FUNZIONE OPPOSTA SI CHIAMA "TUOPPER"*/
    cout <<"Valore impostato: "<<y<<endl;
    cout <<"Valore trasformato: "<<x<<endl;
    cout<< endl;
    cout <<"---------------------------------------------"<<endl;
    cout<< "Programma realizzato con variabile char" <<endl;
    if (isalpha(x))
    {
        if ( x=='a' || x=='e' || x=='i' || x=='o' || x =='u' )
            cout << "La lettera inserita è una vocale" <<endl;
        else
            cout << "La lettera inserita è una consonate"<< endl;
    }
    else
    cout << "Il simbolo inserito non fa parte dell'alfabeto" <<endl;
    cout << endl;
    cout <<"---------------------------------------------"<<endl;
    cout << "Programma realizzato con variabile stringa"<< endl;
    string vocale = "aeiou";
    string consonante = "bcdfghlmjkpqrstvzxy";
    //CREAZIONE DI DUE VARIABILI STRINGA CONTENETE UNA LE VOCALI E L' ALTRA LE CONSONANTI
    if (vocale.find(x)!=string::npos)
        cout << "La lettera inserita e' una vocale"<<endl;
    else
    {
        if (consonante.find(x)!=string::npos)
        cout << "La lettera inserita e' una vocale"<<endl;
        else
        cout << "Il simbolo inserito non fa parte dell' alfabeto"<<endl;

    }
    cout <<"---------------------------------------------"<<endl;
    if (vocale.find(x)==string::npos)
        cout << "Il simbolo/lettera e' nella posizione non trovata nella stringa vocali (string::npos)"<<endl;
    if (consonante.find(x)==string::npos)
        cout << "Il simbolo/lettera e' nella posizione non trovata nella stringa consonanti (string::npos)"<<endl;
return 0;
}
