#include <iostream>

using namespace std;

int main()
{

    int inseriti=0;
    //MI TIENE CONTO DI TUTTI GLI ELEMENTI DELL'ARRAY
    //CIOE' SE INSERITI=3 AVREMO L ELEMENTO HOBBY[3]
    bool stop=false;
    //VARIABILE CHE CI PERMETTE DI FERMARE IL CICLO
    const int MAX_HOBBY=3;
    //VARIABILE COSTANTE CHE PERMETTE DI RENDERE IL
    //NOSTRO ARRAY PIU' STRUTTURATO
    string hobby[MAX_HOBBY]={"a","b","c",};
    //ARRAY CON 6 ELEMENTI, AVREMMO QUINDI HOBBY[1]
    //HOBBY[2]....HOBBY[3]
    int posizione=0;
    while(posizione<MAX_HOBBY)
    {
        cout <<posizione <<": "
             <<hobby[posizione] <<endl;
        posizione++;
    }
    while (inseriti<MAX_HOBBY && !stop)
    //LA FUNZIONE CICLO E' LEGATA A DUE CONDIZIONI
    //LA PRIMA E' CHE L' ARRAY HA FINITO GLI ELEMENTI
    //LA SECONDA CHE SE ARRAY ( es N°5; hobby[5]=f)
    //STOPPA IL CICLO SE PREMO "f"
    {
        cout << "Inserire hobby: "
        << inseriti+1
        //NON MODIFICHIAMOIL VALOREDI INSERITI MA
        //GLI DICO SEMPLECIMENTE DI MOSTRARE IL VALORE
        //DI INSERITI +1
        << " di "<< MAX_HOBBY
        << " hobby (PREMI f PER FINIRE) -->";
        getline(cin,hobby[inseriti]);
        //E' UN COMANDO CHE CI PERMETTE DI PRENDERE(GET)
        //LA RIGA(LINE) CIOE' L'HOBBY DAI NOI SCRITTO E
        //LO ASSOCIA AL L ELEMETO DELL' ARRAY

        if (hobby[inseriti]=="f"||hobby[inseriti]=="F")
            stop=true;
        //LA FUNZIONE CI PERMETTE DI STOPPARE IL CICLO
        //SE ASSOCIAMO A HOBBY[(es.3)] ALLA LETTERA "f"
        else
            inseriti++;
        //SE NON SI VERIFICA LA CONZIONE DI IF ALLORA
        //AGGIUNGIAMO 1 ALLA VARIABILE INSERITI
    }
    posizione=0;
    while(posizione<inseriti)
    {
        cout <<posizione <<": "
             <<hobby[posizione] <<endl;
        posizione++;
    }

    cout"-----------------------------------------------\n";


    for (int posizione=0;posizione<inseriti;posizione++)
        cout <<posizione <<": "<<hobby[posizione] <<endl;


    return 0;
}
