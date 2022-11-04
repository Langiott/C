#include <iostream>
using namespace std;
int main()
{
    int numero=0;
    cout << "INSERIRE NUMERO: \n";
    cin >> numero;
    cout << "I PRIMI 8 BIT DI" << numero << "SONO: "<<endl;
    for (int n=0;n<=7;(numero & (2^n)),n++)
    {
    if ((numero & (2^n))==(2^n)) cout <<"1";
    else cout << "0";
    }
    cout<<endl;
    int numero1=0;
    cout << "INSERIRE NUMERO1: \n";
    cin >> numero1;
    cout << "I PRIMI 8 BIT DI  " << numero1 << "  SONO: ";
    if ((numero1 & 128)==128) cout << "1";else cout << "0";
    if ((numero1& 64)==64)    cout << "1";else cout << "0";
    if ((numero1 & 32)==32)   cout << "1";else cout << "0";
    if ((numero1 & 16)==16)   cout << "1";else cout << "0";
    if ((numero1 & 8)==8)     cout << "1";else cout << "0";
    if ((numero1 & 4)==4)     cout << "1";else cout << "0";
    if ((numero1 & 2)==2)     cout << "1";else cout << "0";
    if ((numero1 & 1)==1)     cout << "1";else cout << "0";

    return 0;

}


