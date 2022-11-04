#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "QUIZ DI MATEMATICA"<<endl;
    cout <<endl;
    int d=0,f=0,s=0,a=0;
    char risposta=' ',risposta1=' ',risposta2=' ',risposta3=' ';
    bool b=true,c=true,z=true,e=true,t=true;

    while(b==true)
    {
    cout << "Quanto vale la somma di tre angoli di un triangolo??" <<endl;
    cout << "1) 360 gradi "<<endl;
    cout << "2) 180 gradi "<<endl;
    cout << "3) nessuna delle risposte precedenti"<<endl;
    cout << "La risposta corretta sara': ";
    cin >> risposta;
    switch (risposta)
    {
    case '1':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        d=1;
        b=false;
        }
    break;
    case '2':
        {
        cout << "RISPOSTA CORRETTA\n";
        d=1;
        a++;
        b=false;
        }
    break;
    case '3':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        d=1;
        b=false;
        }
    break;
    default:
        {
        cout <<"RISPOSTA NON VALIDA RIPETERE DOMANDA\n" ;
        cout<< endl;
        d=0;
        b=true;
        }
    break;
    }//WHILE
    } //SWITCH
    cout <<endl;





    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










    /*
    while(c==true)
    {
    if(d==1)
    {
    int risposta1;
    cout << "Quanti sono i lati di un eptadecagono??" <<endl;
    cout << "1) 17 "<<endl;
    cout << "2) 11 "<<endl;
    cout << "3) 21 "<<endl;
    cout << "La risposta corretta sara': ";
    cin >> risposta1 ;
    if(risposta1!='1'|| risposta1!='2' || risposta1!='3' )
    {
        c=true;
    }
    else
    {
    switch (risposta1)
    {
    case '1':
        {
        cout << "RISPOSTA CORRETTA\n";
        f=1;
        a++;
        c=false;
        }
    break;

    case '2':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        f=1;
        c=false;
        }
    break;

    case '3':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        f=1;
        c=false;
        }
    break;
    default:
        {
        cout <<"RISPOSTA NON VALIDA RIPETERE DOMANDA\n";
        cout<< endl;
        f=0;
        c=true;
        }
    break;
    }
    }
    }
    cout <<endl;
    }
    */





    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////








    while (z==true)
    {
    if(f==1)
    {
    int risposta2;
    cout << "Qual'e dei suguenti punti non derivabili viene chiamato:punto di non derivabilità di primo grado??" <<endl;
    cout << "1) cuspide "<<endl;
    cout << "2) flesso a tangente verticale "<<endl;
    cout << "3) punto angoloso "<<endl;

    cout << "La risposta corretta sara': ";
    cin >> risposta2 ;
    if(risposta2!=1 || risposta2!=2 || risposta2!=3 )
    {
        z=true;
    }
    else
    {
    switch (risposta2)
    {
    case '1':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        s=1;
        z=false;
        }
    break;

    case '2':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        s=1;
        z=false;
        }
    break;

    case '3':
        {
        cout << "RISPOSTA CORRETTA\n";
        s=1;
        a++;
        z=false;
        }
    break;
    default:
        {
        cout <<"RISPOSTA NON VALIDA RIPETERE LA DOMANDA\n";
        cout<< endl;
        s=0;
        z=true;
        }
    break;
    }
    }
    }
    }
    cout <<endl;





    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







    while (e==true)
    {
    if(s==1)
    {
    int risposta3;
    cout << "Come si chiama la forma delle patatine Pringles??" <<endl;
    cout << "1) struttura di Weaire-Phelan "<<endl;
    cout << "2) paraboloide iperbolico"<<endl;
    cout << "3) esagono "<<endl;

    cout << "La risposta corretta sara': ";
    cin >> risposta3 ;
    switch (risposta3)
    {
    case '1':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        e=false;
        }
    break;

    case '2':
        {
        cout << "RISPOSTA CORRETTA\n";
        e=false;
        a++;
        }
    break;

    case '3':
        {
        cout << "RISPOSTA SBAGLIATA\n";
        e=false;
        }
    break;
    default:
        {
        cout <<"RISPOSTA NON VALIDA RIPETERE LA DOMANDA\n";
        cout<< endl;
        e=true;
        }
    break;
    }
    }
    }
    cout<< endl;
    cout << "Valore variabile a:" <<a<<endl;
    cout<< endl;
    if (a==4)
        cout << "CONGRATULAZIONI!! HAI PASSATO IL TEST"<<endl;
    else
        cout << "TEST NON SUPERATO, RITENTA UN'ALTRA VOLTA"<<endl;

    return 0;

}
