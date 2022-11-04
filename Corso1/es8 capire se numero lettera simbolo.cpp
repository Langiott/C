#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
  while(true)
  {
  char a=' ';
  cout << "INSERIRE PRIMO SIMBOLO: ";
  cin >> a;
  cout<<endl;
  if (isalnum(a))
  {
      if (isalpha(a))
        cout << "IL SIMBOLO FA PARTE DEL ALFABETO\n";
        else
        cout << "IL SIMBOLO E' UN NUMERO\n";

  }
  else
  cout << "NON E' UN NUMERO ALFANUMERICO\n";
  }
  return 0;
}
