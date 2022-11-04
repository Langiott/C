#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char n=' ';
    bool a=true;
    cout << "Inserire un numero: ";
    cin >> n;
    cout << "Valore assegnato dal compilatore di una variabile char: " << n<< endl;

    if (isalpha(n))
    {
    cout << "Inserire un numero NON simboli!!";
    }
    else
    {
    if (n%2==0)
    {
        cout << "Numero inserito e' pari" <<endl;
        cout << "Il resto della nostra divisione N/2, se 1 ha resto se 0 non ha resto:"<< n%2 << endl;
    }
    else
    {
        cout << "Numero inserito e' dispari" <<endl;
        cout << "Il resto della nostra divisione N/2, se 1 ha resto se 0 non ha resto:"<< float (n%2) << endl;
    }
    }

return 0;


}
