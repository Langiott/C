#include <iostream>
using namespace std;

int somma(int (*formale)[4], int righe, int colonne)
{
  int parziale = 0;
  for (int i = 0; i < righe; ++i)
	for (int j = 0; j < colonne; ++j)
		parziale += *(*(formale + i) + j);
  return parziale;
}


int main()
{
 int i=0,j=0;
 int righe=3;
 int colonne=4;
 int attuale[3][4]={{0,2,4,6},{1,3,5,7},{8,9,8,9}};
 cout <<"ARRAY HA QUESTA FORMA, CON RIGHE E COLONNE (costruito con doppio ciclo)"<<endl;
 for (int i = 0; i < righe; ++i)
	for (int j = 0; j < colonne; ++j)
	{
     cout << attuale[i][j]<< " ";
     if ((j==3)&&(i==0||i==1||i==2))cout <<endl;
	}
 cout <<endl;
 cout <<"SOMMA DEI PRIMI 3 NUMERI DELLA PRIMA RIGA"<<endl;
 cout << somma(attuale,1,3) << '\n';
 cout <<"SOMMA DEI PRIMI 4 NUMERI DELLA PRIMA E SECONDA RIGA"<<endl;
 cout << somma(attuale,3,4) << '\n';
 cout <<"SOMMA DEI PRIMI 4 NUMERI DELLA SECONDA RIGA"<<endl;
 cout << somma(attuale,2,4) << '\n';
 return 0;
}
