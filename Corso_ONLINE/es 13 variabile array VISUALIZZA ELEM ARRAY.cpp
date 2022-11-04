#include <iostream>

using namespace std;

int main()
{
    /*string hobby1="",hobby2="",hobby3="";
    bool stop=false;

    cout << "Dimmi un tuo hobby (premi f per fermare)\n";
    getline(cin,hobby1);
    stop=hobby1=="f";

    if(!stop)
    {
    cout << "Dimmi un tuo hobby (premi f per fermare)\n";
    getline(cin,hobby2);
    stop=hobby2=="f";
    }

    if(!stop)
    {
    cout << "Dimmi un tuo hobby (premi f per fermare)\n";
    getline(cin,hobby3);
    stop=hobby3=="f";
    }*/
    //Il programma sopra è molto premitivo e molto lungo
    //per ovviare a questo utilizzo gli array (schieramente)

    const int MAX_HOBBY=6;
    //programma piu completo,const int è una costante
    string hobby[MAX_HOBBY]={"","fumare","danzare","pescare"};
    //faccio resente che i primi tre elementi (hobby) sono vuoti
    //string hobby[]={"primo","secondo","hobby"};
    //hobby[0]......hobby[6], is 7 elements
    int posizione=1;
    while(posizione<MAX_HOBBY)
    {
        cout <<posizione <<": "
             <<hobby[posizione] <<endl;
        posizione++;
    }
    // int posizione mi serve per prende man man hobby1, hobby2...
    //il ciclo while stampera 5 valori in base al valore della
    //posizione in relazione con la costante  MAX_HOBBY









    return 0;
}
