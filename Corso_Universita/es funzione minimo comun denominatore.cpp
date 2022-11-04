#include <iostream>

using namespace std;

int mcd(int alfa,int beta)
{
    int resto;
    while(beta!=0)
    {
        resto= alfa%beta;
        alfa=beta;beta=resto;
    }
    return alfa;
}
int main()
{
    int a=0,b=0;
    cout << "INSERIRE COPPIA DI NUMERI\n";
    cin >> a >>b;
    cout << "IL MINIMO COMUN DENOMINATORE SARA': "
         << mcd(a,b);
    return 0;
}
