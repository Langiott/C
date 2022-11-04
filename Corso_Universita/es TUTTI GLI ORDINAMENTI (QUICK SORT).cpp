#include <iostream>
using namespace std;

void stampa_vettore(int v[],unsigned n)
{
    for (int i=0;i<n;i++)
    {cout<< "V["<<i<<"]= "<<v[i] <<" ";}

}
void inserimentodiretto(int v[],unsigned n)
{
    int appoggio;
    for (unsigned i=1; i<n;i++)
        {
            appoggio = v[i];
            int j=i-1;
            while ((j>=0) && (v[j]>appoggio))
            {v[j+1]=v[j]; j--;}
            v[j+1]=appoggio;
        }
}

void selezionediretta (int v[],unsigned n)
{
    int appoggio;
    unsigned posminimo;
    for (unsigned i=0;i<n-1;i++)
        {
            int posminimo=i;
            unsigned j=i+1;
            while(j<n)
                {
                    if (v[j]<v[posminimo])posminimo=j;
                    j++;
                }
            appoggio =v[i];
            v[i]= v[posminimo];
            v[posminimo]=appoggio;
        }
}

void scambiodiretto(int v[],unsigned n)
{
    int appoggio;
    bool scambio;
    scambio= true;
    while(scambio)
    {
        scambio= false;
        for (unsigned i=0;i<n-1;i++)
            {
                if (v[i]>v[i+1])
                {
                    appoggio=v[i];
                    v[i]=v[i+1];
                    v[i+1]=appoggio;
                    scambio=true;
                }
            }
    }
}
void quicksort(int v[],int s,int d)
{
    int i=s;int j=d;
    int tmp,pivot;
    pivot=v[(s+d)/2];
    do{
            while(v[i]<pivot)i++;
            while(v[j]<pivot)j--;
            if (i<=j)
                {
                 tmp=v[i];
                 v[i]=v[j];
                 v[j]=tmp;
                 i++;
                 j--;
                }
        }while(i<=j);
    if(s<j){quicksort(v,s,j);}
    if(i<d){quicksort(v,i,d);}
}


int main()
{
    unsigned int  n=0;
    int vett[n];
    int x;
    bool y;
    y=true;
    cout << "QUANTI ELEMENTI HA IL VETTORE??" << endl;
    cin >> n;
    cout << "SCRIVI "<< n <<" ELEMENTI DEL TUO VETTORE"<<endl;
    for(int i=0;i<n;i++)
    {
       cout << "VETTORE num: " << i <<"-->";
       cin >> vett[i];
       cout <<endl;
    }
    cout << "VETTORE PRIMA DELL' ORDINAMENTO:"<<endl;
    stampa_vettore(vett,n);
    cout << endl;
    cout <<"---------------------------------------------------"<<endl;
    cout << endl;
    cout <<"ORDINAMENTO DI UN VETTORE:"<<endl;
    cout <<"1: per inserimento diretto;"<<endl;
    cout <<"2: per selezione diretta;"<<endl;
    cout <<"3: per scambio diretto;"<<endl;
    cout <<"4: per partizione;"<<endl;
    cout <<"5:premi 5 per finire programma"<<endl;
    cout << endl;
    while(y)
    {
    cout <<"QUALE ORDINAMENTO VUOI USARE: ";cin>>x;
    switch(x)
    {
        case 1:
        inserimentodiretto(vett,n);
        cout << "VETTORE DOPO L' ORDINAMENTO: "<<endl;
        stampa_vettore(vett,n);cout<<endl;
        cout << "LA COMPLESSITA' DELL' ALGORITMO E' 2^n "<<endl;
        cout << endl;
        y=true;break;
        case 2:
        selezionediretta(vett,n);
        cout << "VETTORE DOPO L' ORDINAMENTO: "<<endl;
        stampa_vettore(vett,n);cout<<endl;
        cout << "LA COMPLESSITA' DELL' ALGORITMO E' 2^n "<<endl;
        cout << endl;
        y=true;break;
        case 3:
        scambiodiretto(vett,n);
        cout << "VETTORE DOPO L' ORDINAMENTO: "<<endl;
        stampa_vettore(vett,n);cout<<endl;
        cout << "LA COMPLESSITA' DELL' ALGORITMO E' 2^n "<<endl;
        cout << endl;
        y=true;break;
        case 4:
        quicksort(vett,0,n);
        cout << "VETTORE DOPO L' ORDINAMENTO: "<<endl;
        stampa_vettore(vett,n);cout<<endl;
        cout << "LA COMPLESSITA' DELL' ALGORITMO E' n*log2(n)"<<endl;
        cout << endl;
        y=true;break;
        case 5:
        y=false;break;
    }
    }
    return 0;
}
