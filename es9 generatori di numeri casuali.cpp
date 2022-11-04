#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*IL PROGRAMMA GENERERA' DEI NUMERI CASUALI
CONPRESI NELL'INTERVALLO (1,6) E DOPO 3 ESTRAZIONI
DEL NUMERO 6 SI FERMERA' IL CICLO DI ESTRAZIONE.
IL PROGRAMMA SARA CAPACE ANCHE DI VERIFICARE SIA
SE L' ESTRAZIONE E' CORRETTA (VEDI COMMENTI) E
VA A CONTARE QUANTI NUMERI SONO SERVITI PER
AVERE 3 VOLTE IL NUMERO 6 */
int main()
{
    int numero_estratto=0;
    //bool n1,n2,n3,n4,n5,n6;
    //n1=n2=n3=n4=n5=n6=false;
    int conta_sei=0;
    int tot_lanci=0;

    while (conta_sei<3)
    {
    numero_estratto = rand()%6;
    tot_lanci++;
    if (numero_estratto==5)
        {conta_sei++;}

    cout<< numero_estratto<<endl;
    /*switch (numero_estratto)
    {
        case 1: n1=true;
        break;

        case 2: n2=true;
        break;

        case 3: n3=true;
        break;

        case 4: n4=true;
        break;

        case 5: n5=true;
        break;

        case 6: n6=true;
        break;
    }
    cout << numero_estratto<<endl;
    if (numero_estratto<1 || numero_estratto>6)
      break;
    if (n1&&n2&&n3&&n4&&n5&&n6)
    {
     cout << "TUTTI I NUMERI SONO STATI ESTRATTI";
     break;
    }*/

    }
    //cout <<"Siamo nei guai!!!" <<endl;
    cout<<"Ci sono voluti "<<tot_lanci<< " numeri per far estrarre " << conta_sei<< " volte il 6";

    //SE METTIAMO RAND()%6 USCIREMO NEL CICLO
    //DATO CHE FORSE USCIRA' UNO ZERO

    return 0;
}
