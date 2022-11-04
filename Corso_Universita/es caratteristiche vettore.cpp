#include <iostream>
using namespace std;

int somma (int formale[] /*formale*/,int n)
{
    int parziale=0;
    for (int i=0;i<n;i++) parziale+=formale[i];
    //formale[i]---> *(formale +i)
    return parziale;
}


int main()
{
    //LE VARIABILI SE SOMO GLOBALI O LOCALI
    //IL PROGRAMMA PROTREBBE CAMBIARE
    const int x=6;
    char stringa[x];
    int a,b,c; //char
    a=b=c= 22; //'@'
    cout << "SCRIVI QUALCOSA: " << endl;
    cin >> stringa;
    //DEVO STARE ATTENTO A NON SUPERARE LA DIM. 6
    cout << "HAI SCRITTO (stringa): " << stringa <<endl;
    for (int i=0;i<x;i++) cout <<"HAI SCRITTO (stringa[i]): "
                         << stringa[i]
                         <<endl;
    //SE LA GLI ELEMENTI DEL VETTORE >X ALLORA
    //AL POSTO DELLE VARIABILI A,B e C
    //ASSEGNERANNO GLI ELEMENTI CHE NON CI STANNO
    cout << "Il valore di a: " << a <<endl
         << "Il valore di b: " << b <<endl
         << "Il valore di c: " << c <<endl;

    cout <<"-----------------------------------------"<<endl;

    int stringa1[5] ={1,2,3,4,5};
    int stringa2[3]= {6,7,8};
    cout << "SOMMA STRINGA1 E N=5: " <<somma(stringa1,5)<<endl;
    cout << "SOMMA STRINGA1 E N=4: " <<somma(stringa1,4)<<endl;
    cout<<endl;
    cout << "SOMMA STRINGA2 E N=3: " <<somma(stringa2,3)<<endl;
    cout << "SOMMA STRINGA2 E N=2: " <<somma(stringa2,2)<<endl;
    cout<<endl;
    cout << "STRINGA1 [5], FALSO DATO: "<<stringa1[5];

    cout <<"-----------------------------------------"<<endl;

    int vett[3][4]={{0,1,2,3},{4,5,6,7},{8,9,0,0}};
    cout << "VETT[0][0]--->" << vett [0][0] <<endl;
    cout << "VETT[0][1]--->" << vett [0][1] <<endl;
    return 0;
}
