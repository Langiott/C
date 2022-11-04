#include <iostream>

using namespace std;

int main()
{
    cout << "INSERIRE UNA PAROLA E' VEDREMO SE QUESTA SIA PAINDROMA" << endl;
    string s="";
    cin>> s;
    /*VERRIFICA LETTERA/POSIZIONE DI UNA STRINGA CON 6 ELEMENTI
    int sinistra=0;
    int destra=s.length()-1;
    cout <<s[0]<< " corrisponde alla posizione sx:" <<sinistra <<endl;
    cout <<s[1]<< " corrisponde alla posizione sx:" <<sinistra+1 <<endl;
    cout <<s[3]<< " corrisponde alla posizione sx:" <<sinistra+2 <<endl;
    cout <<s[3]<< " corrisponde alla posizione dx:" <<destra-2<<endl;
    cout <<s[4]<< " corrisponde alla posizione dx:" <<destra-1<<endl;
    cout <<s[5]<< " corrisponde alla posizione dx:" <<destra<<endl;
    */

    bool palindroma=true;
    for (int sinistra=0,destra=s.length()-1;
         sinistra<destra;sinistra++,destra--)
         {
              if (s[sinistra]!=s[destra])
              {
              palindroma=false;
              break;
              }
         }

    if(palindroma)
        cout <<"PALINDROMA!!\n";
    else
        cout <<"NON E' PALINDROMA \n";


    return 0;

}
