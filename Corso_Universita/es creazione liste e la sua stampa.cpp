#include <iostream>
using namespace std;

struct studente
{
    char nome[12];
    int voto;
    studente* successivo;
};

typedef studente* lista;

void inserisci_in_testa(lista& inizio, studente elem)
{
lista p = new studente;
*p=elem;
p->successivo = inizio;
inizio=p;
}




lista creaLista(int n)
{
  lista p,p0;
  p0=0;
  for (int i=1;i<=n;i++)
  {
      p= new studente;
      cin >> p->nome >> p->voto;
      p->successivo=p0;
      p0=p;
  }
  return p0;
}

void stampaLista (lista p0)
{
    lista p=p0;
    while(p!=0)
    {
        cout <<"id: "<<&(p->nome)<<" "<< p->nome <<"->"
             <<" "<< p->voto <<" "
             << "id: "<<&( p->successivo)
             <<" "<<p->successivo<<"->"<<endl;

        p=p->successivo;
    }
}

int main()
{
    short numero_studenti;
    cout << "QUANTI SONO GLI STUDENTI?\n";
    cin>>numero_studenti;
    cout << "FUNZIONE CREA LISTA (Inserire nome e poi voto"<<endl;
    lista scritto=creaLista(numero_studenti);
    stampaLista(scritto);
}
