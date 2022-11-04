#include <iostream>

using namespace std;

//vedi corso vecchio fcamuso dev c++ n°12

//FUNZIONE STAMPA ELEMENTI DI DUE VETTORI
void stampafiumi(string fiumi[],int km[],int quanti)
{
    for (int posfiumi=0; posfiumi<quanti;posfiumi++)
        cout << fiumi[posfiumi]<<km[posfiumi]<<"\n";
        cout <<endl;
}
//FUNZIONE SALTA RIGHE
void saltariga(int quante)
{
for(int riga=0;riga<quante;riga++)
cout<<endl;
}


int main()
{
    string fiumi[]={"po","adige","tevere","volturno","tirso",""};
    int km[]={652,410,405,82,153,-1};
    const int quantifiumi=5;
    int posizionemin[ quantifiumi];
    //652,410,405,82,153
    //82,(410,405,652,153) applico algoritmo agli elementi nella parentesi
    //82,153,(405,652,410) applico algoritmo agli elementi nella parentesi
    //82,153,405,(652,410) scopro che il 3 elemento e gia in posizione
    //82,153,405,410,(652) non confronto l 'ultimo elemento con se stesso
    //infatti scrivo quantifiumi-1
    cout <<"SEGUENZA INIZIALE"<<endl;
    cout << km[0]<<" "<< km[1]<<" "<< km[2]<<" "<< km[3]<<" "<< km[4]<<endl;
    saltariga(2);
    stampafiumi(fiumi,km,quantifiumi);

    for (int partida=0;partida<quantifiumi-1;partida++)
    {
        //IL PRIMO   partida=0 e corrisponde al numero 652 E SI SVOLGE L'ALGORITMO
        //IL SECONDO partida=0 e corrisponde al numero 410 E SI SVOLGE L'ALGORITMO
        //DOVE SI TROVA IL MINIMO??
        int posmin=partida;
        for (int posele=partida+1;posele<quantifiumi;posele++)
        {
            if(km[posele]<km[posmin])
            posmin=posele;
        }
        //METTI IN MINIMO AL SUO POSTO
        int tmp=km[partida];
        km[partida]=km[posmin];
        km[posmin]=tmp;
        //DA........ 652,410,405,82,153
        //PASSO A... 82,410,405,652,153
        //MA DOVREMMO SCAMBIARE ANCHE I NOMI
        string tmps=fiumi[partida];
        fiumi[partida]=fiumi[posmin];
        fiumi[posmin]=tmps;
        //DA........"po","adige","tevere","volturno","tirso"
        //PASSO A..."volturno","adige","po","volturno","tirso"
    }
    cout <<"SEQUENZA IN ORDINE CRESCENTE "<<endl;
    cout << km[0]<<" "<< km[1]<<" "<< km[2]<<" "<< km[3]<<" "<< km[4]<<endl;
    cout <<endl;
    stampafiumi(fiumi,km,quantifiumi);

    return 0;
}
