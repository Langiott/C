#include <iostream>

using namespace std;

int main()
{
    //PROGRAMMA UN PO' DIVERSO
    /*string inputTotali="";
    for (string s;cin>>s;)
    {
    inputTotali +=s;
    cout <<"Input accumulati: " <<inputTotali <<endl;
    }*/

    //DEVO PREMETRE CTRL+Z PER FINIRE CICLO
    string inputTotali="";
    for (string s;cin>>s;)
    {
    inputTotali +=s;
    }
    cout <<"Input accumulati: " <<inputTotali <<endl;


    //CICLO INFINITO RIMARRA' ININITAMENTE IN ATTESA
    /*
    string inputTotali="";
    string s;
    for (;;)
    {
    inputTotali +=s;
    }
    cout <<"Input accumulati: " <<inputTotali <<endl;
    */






    return 0;

}
