#include <iostream>
using namespace std;

#define MAX 60



int main()
{
  int voti[MAX];  // definisco e alloco in memoria un VETTORE di MAX interi
  int x;
  cout << "Dimmi quanti sono gli studenti: \n";
  cin >> x;
  if (x > MAX) return 0;
  for (int i=0; i < x; i++){
    cout<<"Inserisci " << i+1 <<" voto: ";
    cin >> voti[i];}

  int sommavoti = 0;
  for (int i=0; i < x; i++) sommavoti += voti[i];

  float media = (float) sommavoti / x;
  cout << "La media dei voti riportati e' " << media << endl;
  return 0;
}

