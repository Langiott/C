#include <iostream>
using namespace std;
int main()
{
    int euro=0;
    float cambio=0;
    cout << "Numero massimo di una variabile intera: " << INT_MAX <<endl;
    cout << "Numero minimo di una variabile intera: " << INT_MIN <<endl;
    // LUNGHEZZA MASSIMA E MINIMA DI UNA VARIABILE INTERA
    cout <<endl;
    cout << "Numero di byte di una variabile intera: " <<sizeof(int)<<endl;
    //NUMERO DI BYTE IN UNA VARIABILE INTERA
    cout << "Inserire euro da cambiare: " <<endl;
    cin >> euro;
    cout << "Valore appreso dal compilatore(euro): "<<euro<<endl;
    cout << "Valore appreso dal compilatore(cambio): "<<cambio<<endl;
    cout<<endl;
    if (euro<=0)
    {
        cout<< "Operazione non possibile, prego inserire un numero maggiore a 0"<<endl;
    }
    else
    {
        cout<< "Inserire cifra di cambio: "<<endl;
        cin>> cambio;
        if (cambio<=0)
        {
            cout<< "Operazione non possibile, prego inserire una cifra di cambio maggiore di 0"<<endl;
        }
        else
        {
            cout << "Valore in dollari sar�: "<< euro*cambio;
        }
    }
    return 0;

}
