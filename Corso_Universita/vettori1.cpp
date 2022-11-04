#include <iostream>
using namespace std;

int somma(int formale[], int n)
{
  int parziale = 0;
  for (int i = 0; i < n; ++i)
  parziale += formale[i];
  return parziale;
}
 int attuale1[5]={0,2,4,6,8};
 int attuale2[3]={1,3,5};

int main()
{
  cout << "VETTORE1[5]= {0,2,4,6,8}" <<endl;
  cout <<endl;
  for (int i=0;i<5;i++)
    cout << "VETTORE1["<<i<<"]= " << attuale1[i]<<endl;
  cout << "SOMMA DEI PRIMI 4 NUMERI: ";
  cout << somma(attuale1, 4) << '\n';
  cout<<"-------------------------------------------"<<endl;
  cout << "VETTORE2[3]= {1,3,5} " <<endl;
  cout <<endl;
  for (int i=0;i<3;i++)
    cout << "VETTORE1["<<i<<"]= " << attuale2[i]<<endl;
  cout << "SOMMA DEI PRIMI 2 NUMERI: ";
  cout << somma(attuale2, 2) << '\n';
  cout<<"-------------------------------------------"<<endl;
  //COSTRUISCO UN VETTORE
  cout<<"DI QUANTI ELEMENTI LO VUOI IL VETTORE??"<<endl;
  unsigned n=0;
  cin >>n;
  int vett[n];
  cout <<"ASSEGNA GLI N= "<<n<<" ELEMENTI DEL VETTORE"<<endl;
  for (int i=0;i<n;i++)
    {cout << "VETTORE["<<i<<"]= ";cin>>vett[i];}
  return 0;
}
