#include <iostream>
#include <fstream>
using namespace std;

#define MAX 60
fstream miofile;

struct libretto {
	char cognome[20];
	unsigned analisi1;
    unsigned fisica1;
    unsigned fondamenti;
};

bool uguali(char *str1, char *str2) {
	while(*str1 == *str2) {
		if (*str1 == '\0') return true;
		str1++; str2++;
	};
	return false;
}

int main()
{
    int quanti, sommavoti;
	miofile.open("testo.txt",ios::in);
	miofile >> quanti;
    float media;
	char cognome[20];
	libretto esami[quanti];


	if (quanti > MAX) return 0;

	for (int i=0; i < quanti; i++)
	miofile >> esami[i].cognome >> esami[i].analisi1  >> esami[i].fisica1  >> esami[i].fondamenti;

	for (int i=0; i < quanti; i++)
	cout<< esami[i].cognome << " " << esami[i].analisi1 <<" " <<  esami[i].fisica1 <<" " <<  esami[i].fondamenti << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].analisi1;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati in analisi è " << media << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].fisica1;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati in fisica è " << media << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].fondamenti;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati a fondamenti è " << media << endl;

	cout << "di chi vuoi sapere i voti?" << endl;
	cin >> cognome;
	int i=0;
	while( !uguali(esami[i].cognome, cognome)) i++;
	cout << cognome << " ha preso " << endl;
	cout << esami[i].analisi1 << " in analisi" << endl;
	cout << esami[i].fisica1 << " in fisica" << endl;
	cout << esami[i].fondamenti << " a fondamenti" << endl;
	miofile.close();
	return 0;
}

