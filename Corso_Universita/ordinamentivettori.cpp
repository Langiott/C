/*
 * ordinamentivettori.cpp
 *
 * Copyright 2016 Aldo Franco Dragoni <aldo@aldo-Aspire-E1-522>
 *
 */

#include <iostream>
#include <fstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

# define NUMERO 100

fstream miofile;


void inserimentodiretto(unsigned v[], unsigned n) {
	unsigned appoggio;
	for(unsigned i=1; i<n; i++) {
		appoggio = v[i]; // cout << "esamino " << v[i] << endl;
		int j = i-1;
		while((j >= 0) && (v[j] > appoggio)) {
			v[j + 1] = v[j]; // cout << "sposto " << v[j] << endl;
  			j--;
  		}
		v[j+1] = appoggio;
	}
}

void selezionediretta(unsigned v[], unsigned n)
{
	unsigned appoggio;
	unsigned posminimo;
	for(unsigned i=0; i<n-1; i++) {
		posminimo = i;
		unsigned j = i+1;
		while(j < n) {
			if (v[j] < v[posminimo]) posminimo = j;
			j++;
		}
		appoggio = v[i];
		v[i] = v[posminimo];
		v[posminimo] = appoggio;
	}
}

void bubblesort(unsigned v[], unsigned n)
{
	unsigned appoggio;
	bool scambio = true;
	while (scambio) {
		scambio = false;
		for(unsigned i=0; i<n-1; i++) {
			if (v[i] > v[i+1]) {
				appoggio = v[i];
				v[i] = v[i+1];
				v[i+1] = appoggio;
				scambio = true;
			}
		}
	}
}


void QuickSort0(unsigned v[], int s, int d)
{
	int i = s, j = d;
	unsigned tmp;
	unsigned pivot = v[(s + d) / 2];
	while (i <= j) {				// PARTIZIONE
		while (v[i] < pivot) i++;
		while (v[j] > pivot) j--;
		if (i <= j) {
			tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			i++;
			j--;
		}
	};
	if (s < j)			// RICORSIONE
	QuickSort0(v, s, j);
	if (i < d)
	QuickSort0(v, i, d);
}

void QuickSort(unsigned v[], int n) {
   QuickSort0(v, 0, n-1);
}

//startime = partenza
int main()
{
	miofile.open("casuali",ios::out);
	unsigned vett[NUMERO];
	clock_t partenza;
	srand (time(NULL));
	//mi dara' dei numeri in base al nano secondi dal momento
	//in cui si accende il pc, ogni volta che lanceremo il programma
	//non va a prendere senpre lo stesso numero ma lo prende in base
	//a quei nanosecondi, crea una sorta di casualita
	for(int i=0; i<NUMERO; i++) vett[i]=rand(); // genera vettore casuali
	for(int i=0; i<NUMERO; i++) miofile << vett[i] << " "; // lo mette su file
	for(int i=0; i<NUMERO; i++) cout << vett[i] << " "; // lo visualizza
	miofile.close();

	/*clock_t startTime = clock();
	inserimentodiretto(vett, NUMERO); // ordina per inserimento diretto
	cout << endl << "ordinato per inserimento diretto in ";
	cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " secondi." << endl;
	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza

	miofile.open("casuali",ios::in);
	for(int i=0; i<NUMERO; i++) miofile >> vett[i]; // lo ricarica
	miofile.close();
	cout << endl << "ricaricato" << endl;
//	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza
	startTime = clock();
	selezionediretta(vett, NUMERO); // ordina per selezione diretta
	cout << endl << "ordinato per selezione diretta in ";
	cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " secondi." << endl;
	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza*//*
	miofile.open("casuali",ios::in);
	for(int i=0; i<NUMERO; i++) miofile >> vett[i]; // lo ricarica
	miofile.close();*/
	cout << endl << "ricaricato" << endl;
//	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza
    partenza = clock();//prendo i numero di clock
	QuickSort(vett, NUMERO); // lo ordina con bubble sort
	cout << endl << "ordinato con bubble sort in ";
	cout << double( clock() - partenza ) /CLOCKS_PER_SEC << " secondi." << endl;
	//ci dice il numero di secondi dal momento dell accensione del programma
	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza
	/*miofile.open("casuali",ios::in);
	for(int i=0; i<NUMERO; i++) miofile >> vett[i]; // lo ricarica
	miofile.close();
	cout << endl << "ricaricato" << endl;
//	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza
	startTime = clock();
	QuickSort(vett, NUMERO); // lo ordina con QuickSort
	cout << endl << "ordinato con QuickSort in ";
	cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " secondi." << endl;
	for(int i=0; i<NUMERO; i++) cout << vett[i] << endl; // lo visualizza*/
	return 0;
}

