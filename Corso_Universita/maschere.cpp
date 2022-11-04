#include "iostream.h"

int main()
{
  unsigned int numero;     
  cout << "Immetti il numero \n";
  cin >> numero;
  cout << "I primi otto bit di " << numero << " sono ";
  if ((numero & 128) == 128) cout << '1'; else cout << '0';
  if ((numero & 64) == 64)   cout << '1'; else cout << '0';
  if ((numero & 32) == 32)   cout << '1'; else cout << '0';
  if ((numero & 16) == 16)   cout << '1'; else cout << '0';
  if ((numero & 8) == 8)     cout << '1'; else cout << '0';
  if ((numero & 4) == 4)     cout << '1'; else cout << '0';
  if ((numero & 2) == 2)     cout << '1'; else cout << '0';
  if ((numero & 1) == 1)     cout << '1'; else cout << '0';
  cout << "\n";
  return(0);
}
