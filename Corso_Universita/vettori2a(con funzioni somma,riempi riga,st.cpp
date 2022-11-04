#include <iostream>
using namespace std;

int somma(int formale[][4], int righe, int colonne)
{
  int parziale = 0;
  for (int i = 0; i < righe; ++i)
	for (int j = 0; j < colonne; ++j)
		parziale += formale[i][j];
  return parziale;
}

void RiempiMatrice(int formale[][4], int righe, int colonne)
{
  for (int i = 0; i < righe; ++i)
	for (int j = 0; j < colonne; ++j)
		{ cout << "Inserisci il dato di riga " << i << " e colonna " << j << '\n';
		  cin >> formale[i][j];
		};
}

void StampaMatrice(int formale[][4], int righe, int colonne)
{
  for (int i = 0; i < righe; ++i)
    { cout << '\n';
	  for (int j = 0; j < colonne; ++j)
		cout << formale[i][j] << ' ';
	}
}

int main()
{
 int attuale[3][4]={{0,2,4,6},{1,3,5,7},{8,9,8,9}};
 StampaMatrice(attuale,3,4);
 cout << '\n';
 RiempiMatrice(attuale,3,4);
 StampaMatrice(attuale,3,4);
 cout << '\n';
 return 0;
}
