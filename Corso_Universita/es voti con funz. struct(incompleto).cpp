#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
#define MAX 60
struct libretto{
       char cognome[20];
       unsigned analisi;
       unsigned fisica;
       unsigned fondamenti;

}esame[100];

bool uguali(char *str1, char *str2) {
	while(*str1 == *str2) {
		if (*str1 == '\0') return true;
		str1++; str2++;
	};
	return false;
}


int main()
{
    fstream file;
    char cognome[20];
    int analisi[MAX];     //={28,30,28,30};
    int fisica[MAX];      //={27,24,27,24};
    int fondamenti[MAX] ; //={30,28,30,20};
    int quanti ;
    int riga=20;
    float media1,media2,media3;
    media1=media2=media3=0;
    libretto esami[riga];
    string riga=" ";
    int i=0;
    if(file)
    {

        while (getline(file,riga)){
        file>> riga[i].cognome
            >> riga[i].analisi
            >> riga[i].fisica
            >> riga[i].fondamenti;
            i++;}

    }



    for (int i=0;i<4;i++)
    cout << esame[i].cognome
         <<" "<<esame[i].analisi
         <<" "<<esame[i].fisica
         <<" "<<esame[i].fondamenti<<endl;
    int sommavoti=0;
    for(int i=0;i<quanti;i++)sommavoti +=esame[i].analisi; //analisi[i]
    media1= (float)sommavoti/quanti;
    cout << "LA MEDIA DEI VOTI DI ANALISI: "<<media1<<endl;

    sommavoti=0;
    for(int i=0;i<quanti;i++)sommavoti +=esame[i].fisica; //fisica[i]
    media2= (float)sommavoti/quanti;
    cout << "LA MEDIA DEI VOTI DI FISICA: "<<media2<<endl;

    sommavoti=0;
    for(int i=0;i<quanti;i++)sommavoti += esame[i].fondamenti; //fondamenti[i]
    media3= (float)sommavoti/quanti;
    cout << "LA MEDIA DEI VOTI DI INFORMATICA: "<<media3<<endl;


     cout << cognome<<endl;
     cout << "DI CHI VUOI I VOTI??"<<endl;
     cin >> cognome;
     int i=0;
     while(!(uguali(esami[i].cognome,cognome)))i++;
     cout << cognome<< " HA PRESO: " <<endl;
     cout << esame[i].analisi << " IN ANALISI" <<endl;
     cout << esame[i].fisica << " IN FISICA" <<endl;
     cout << esame[i].fondamenti << " IN FONDAMENTI" <<endl;
    file.close();
    return 0;
    /*
    cout << "LA MEDIA DEI VOTI DI INFORMATICA: "<<media3<<endl;
    cout << "DI CHI VUOI I VOTI??"<<endl;
    cin >> cognome;
    cout << "NON SO BENE COME GESTIRE QUESTA COSA" <<cognome<<endl;*/

     //VEDI LEZIONE 19 DRAGONI
}
