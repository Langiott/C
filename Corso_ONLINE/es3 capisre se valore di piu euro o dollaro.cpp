#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double tasso=1.5;
  int dollaro=0,euro=0;
  cout << "Inserisci cifra in euro: "<<endl;
  cin>> euro;
  cout << "Inserisci cifra in dollari: "<<endl;
  cin>> dollaro;
  double diff= euro*tasso-dollaro;
  if(abs(diff)<1e-8)
  // la funzione abs() serve a prendere un valore assoluto della differnza
  // il simbolo 1e-8 equivale a 1*10^-8
  cout << "Cifre si equivalgono";
  else
  {
      if (diff>0)
      cout << "Vale di piu la somma in euro \n";
      else
      cout << "Vale di piu la somma in dollari \n";
  }
  return 0;
}
