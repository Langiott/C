#include <iostream>
using namespace std;

struct CD
{
    char titolo[30];
    char artista [30];
    float prezzo;
}cd1={"BAR DELLA RABBIA","MANNARINO",20.5};

struct cliente
{
    char nome[30];
    char indizzo[30];
    char citta[40];
};

struct spesa
{
    struct cliente dati;
    double quant_spesa;
}a={"ANDREA","VIA BOCCABIANCA 90","CUPRA MARITTIMA",20.345};

int main()
{
    cout << "VARIABILE STRUCT GIA' ASSEGNATA:"<<endl;
    cout << "cd1.titolo= " << cd1.titolo <<endl;
    cout << "cd1.artista= " << cd1.artista<<endl;
    cout << "cd1.prezzo= " << cd1.prezzo<<endl;
    cout <<"---------------------------------------------------"<<endl;
    CD cd2;
    cout << "ASSEGNA TITOLO,ARTISTA,PREZZO: "<<endl;
    cin>>cd2.titolo>>cd2.artista>>cd2.prezzo;
    cout << "cd2.titolo= " << cd2.titolo<<endl;
    cout << "cd2.artista= " << cd2.artista<<endl;
    cout << "cd2.prezzo= " << cd2.prezzo<<endl;
    cout <<"---------------------------------------------------"<<endl;
    cout << "VARIABILE,STRUCT,ANNIDATE: "<<endl;
    cout << "nome= " << a.dati.nome<<endl;
    cout << "indirizzo= " <<a.dati.indizzo<<endl;
    cout << "citta'= " << a.dati.citta<<endl;
    cout << "quantita' spesa= " << a.quant_spesa<<endl;
    cout <<"---------------------------------------------------"<<endl;
}
