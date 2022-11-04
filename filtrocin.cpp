#include <iostream>
#include <fstream>

using namespace std;

fstream primo, secondo;
char x;
char nome1[20];
char nome2[20];

int main()
{
	cout << "dammi il file originale" << endl;
	cin >> nome1;
	cout << " dammi il nome del file copia" << endl;
	cin >> nome2;
	primo.open(nome1,ios::in);
	secondo.open(nome2,ios::out);
	while(primo >> x)
	{
		if (x== 'e') secondo << 'o';
			else secondo << x;
	}
	primo.close();
	secondo.close();
	return 0;
}

