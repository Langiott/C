#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //lezione n°56 Fcamuso
    /*
    int arrayDiInteri[100];
    //collezione di array interi
    for (int ele : arrayDiInteri)
        ele=rand();

    for (int ele: arrayDiInteri)
    cout <<ele<<" ";*/

    string fiumi[]={"po","adige","tevere","volturno","tirso"/*,"tappo"*/};
    int km[]={652,410,405,175,153,/*-1*/};
    int quantifiumi=5;
    //AVREMO DA 0 A 4 ELEMETI 5 E' IL NUMERO CHE CI INDICA SE
    //ABBIAMO SFORATO
    string fiumecercato="";
    cout << "FIUME DA CERCARE"<<endl;
    cin>> fiumecercato;
    //fiumi[quantifiumi]=fiumecercato; VALORE TAPPO

    //ALGORITMO DI RICERCA

    int posfiumi=0;
    //VARIABILE NON LOCALE A FOR A LO SCOPO DI CONTATORE
    for (posfiumi=0;posfiumi<quantifiumi;posfiumi++)
        if(fiumi[posfiumi]==fiumecercato)break;
    if (posfiumi==quantifiumi)
        cout << "\nFIUME NON TROVATO\n";
    else
        cout <<"\n"<<"Il fiume "<<fiumecercato<<" ha "
             <<km[posfiumi]
             <<" km\n";
        cout << "POSIZIONE NELL'ELENCO FIUMI: " <<posfiumi<<endl;


    cout <<"----------------------------------------------------"<<endl;
    //////////////////////////////////////////////////////////////
    //lezione n°57 Fcamuso

    int totale=0;
    for (int i=0;i<quantifiumi;i++/*i+=2*/)
        totale+=km[i];
    cout << "Totale km: " <<totale<<endl;


    //se volessi sommare gli elementi pari di km[] sommerò
    //i+=2 (METODO 1)
    //se volessi sommare gli elementi pari di km[] sommerò
    //(METODO 2)
    /*int totale=0;
    for (int i=0;i<quantifiumi;i++)
        if (i%2==0)//se è zero allora pari
        totale+=km[i];
    cout << "Totale km: " <<totale<<endl;*/

    //se volessi sommare gli elementi dispari di km[] sommerò
    /*int totale=0;
    for (int i=0;i<quantifiumi;i++)
        if (!(i%2))
        totale+=km[i];
    cout << "Totale km: " <<totale<<endl;*/

    //se volessi sommare gli elementi pari di km[] sommerò
    //(METODO 3)
    /*int totale=0;
    for (int i=0;i<quantifiumi;i++)
        totale+=(i%2) ? 0 :km[i];
    cout << "Totale km: " <<totale<<endl;*/

    return 0;
}
