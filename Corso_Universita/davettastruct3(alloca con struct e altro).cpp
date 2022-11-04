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

int main()
{
    int quanti;
    int sommavoti;
    float media;
    char cognome[20];
	miofile.open("testoesercizio",ios::in);
	miofile >> quanti;
	libretto esami[quanti];  // definisco un vettore di records
    cout << "QUANTI= " << quanti;
	if (quanti > MAX)
    {cout <<"SONO TROPPI!!"<<endl;
        return 0;}

	for (int i=0; i < quanti; i++)
	miofile >> esami[i].cognome >> esami[i].analisi1  >> esami[i].fisica1  >> esami[i].fondamenti;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].analisi1;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati in analisi e': " << media << endl;

	/*sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].fisica1;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati in fisica e': " << media << endl;

	sommavoti = 0;
	for (int i=0; i < quanti; i++) sommavoti += esami[i].fondamenti;
	media = (float) sommavoti / quanti;
	cout << "La media dei voti riportati a fondamenti e': " << media << endl;
    */
	cout << "Di chi vuoi sapere i voti?" << endl;
	cin >> cognome;
	int i=0;
	while(esami[i].cognome != cognome) i++;
	cout << cognome << "ha preso ";
	cout << esami[i].analisi1 << "in analisi " << endl;
	cout << esami[i].fisica1 << "in fisica " << endl;
	cout << esami[i].fondamenti << "a fondamenti " << endl;
	miofile.close();
	return 0;
}

