#include <iostream>
#include <fstream>
using namespace std;

#define MAX 60
fstream miofile;


int main()
{
	char cognome[20];
    int analisi1[MAX];
    int fisica1[MAX];
    int fondamenti[MAX];
    int quanti=0;
    float media;
    int sommavoti;

	miofile.open("C:\\Users\\PC\\Desktop\\ANDREA\\ESERCIZI C++\\ESERCIZI DRAGONI\\VETTORI + STRUCT+ORDINAMENTO\\testoesercizio.txt",ios::in);
	miofile >> quanti;
	cout << "variabile quanti: "<< quanti<<endl;
	if (quanti > MAX) return 0;

	for (int i=0; i < quanti; i++) miofile >> cognome[i] >> analisi1[i]  >> fisica1[i]  >> fondamenti[i];

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += analisi1[i];
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati è " << media << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += fisica1[i];
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati è " << media << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += fondamenti[i];
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati è " << media << endl;

	cout << "di chi vuoi sapere i voti?" << endl;
	cin >> cognome;
	cout << "non so bene come prendere i voti di " << cognome << endl;

	return 0;
}

