#include <iostream>

using namespace std;

int main()
{
    string fiumi[]={"Po","Adige","Tevere","Volturno","Tirso"};
    int km[]={652,410,405,175,153,};
    int quantifiumi=5;
    int posizionemax=0;
    int posizionemin=0;

    //MINIMO
    for(int posizione=1;posizione<quantifiumi;posizione++)
       if (km[posizione]<km[posizionemin])
       posizionemin=posizione;

    //MASSIMO
    for( int posizione=1;posizione<quantifiumi;posizione++)
       if (km[posizione]>km[posizionemax])
       posizionemax=posizione;

    cout << "Il fiume piu corto e' il "
         <<fiumi[posizionemin]<<" con: "
         <<km[posizionemin] << "km\n";
    cout << "POSIZIONE DELL'ELEMENTO MINIMO E': "<< posizionemin<<endl;

    cout << "Il fiume piu lungo e' il "
         <<fiumi[posizionemax]<<" con: "
         <<km[posizionemax] << "km\n";
    cout << "POSIZIONE DELL'ELEMENTO MASSIMO E': "<< posizionemax<<endl;
    return 0;

    //VIDEO 58 fcamuso (VEDI SECONDA PARTE)

}
