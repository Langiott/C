#include <iostream>
#include <limits>
using namespace std;
int main()
{

   float f        = 1./3;
   double d       = 1./3;
   long double ld = 1.L/3;
   /*le costanti letterali floating point vengono considerate
   come double e se noi vogliamo svolgere la funzione nel
   domininio long double dobbiamo scrivere 1.L/3 cosi guadagnamo
   piu precisione del numero*/

   cout.precision(20);
   //mi permette di vedere 1/3 in modo ancora più preciso
   cout << "Il compilatore trasforma 1/3 in una variabile float:          "<<f<<endl;
   cout << "Il compilatore trasforma 1/3 in una variabile double:         "<<d<<endl;
   cout << "Il compilatore trasforma 1/3 in una variabile long double:    "<<ld<<endl;
   cout<< endl;

   cout << "Numero byte di 1/3 di una variabile float:       " << sizeof(float)<<endl;
   cout << "Numero byte di 1/3 di una variabile double:      " << sizeof(double)<<endl;
   cout << "Numero byte di 1/3 di una variabile long double: " << sizeof(long double)<<endl;
   cout<<endl;


   cout << "Numero massimo di una variabile float \n"
        << "Max: " << numeric_limits<float>::max()<<"\n"
        << "Min: " << -(numeric_limits<float>::max())<<"\n\n";
   cout << "Numero massimo di una variabile double \n"
        << "Max: " << numeric_limits<double>::max()<<"\n"
        << "Min: " << -(numeric_limits<double>::max())<<"\n\n";
   cout << "Numero massimo di una variabile long double \n"
        << "Max: " << numeric_limits<long double>::max()<<"\n"
        << "Min: " << -(numeric_limits<long double>::max())<<"\n\n";;


   /*per il valore minimo di una variabile non è stato possibile visualizzare
   niente dato che nuemric_limits<variabile> non trova niente nella funzione lowest()
   ma avendo capito qual è il numero massimo basterà metterci un meno e
   scopriremo la cifra piu bassa che la variabile può assumere*/

   return 0;







}


