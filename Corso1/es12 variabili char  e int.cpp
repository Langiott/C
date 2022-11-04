#include <iostream>

using namespace std;

int main()
{
    char c= 'a';
    int b=97;
    cout <<"LA VARIABILE CHAR:   " <<c<< "  VIENE TRASFORMATA IN VARIABILE INTERA: "<< int(c) <<endl;
    cout <<"LA VARIABILE INTERA: " << b<< " VIENE TRASFORMATA IN VARIABILE CHAR:   "<< char(b ) <<endl;
    cout << "NUMERO DI BYTE DI UN INT:  "<< sizeof(int) <<endl;
    cout << "NUMERO DI BYTE DI UN CHAR: "<< sizeof(char)<<endl;
    for (int ascii=0;ascii<256;ascii++)
    {
        string x="";
        cout << "Codice: " << ascii <<" corrisonde al carattere("
             <<char(ascii) << ")\n";
        if ((ascii+1)%255==0)
            getline(cin,x);
    }
    return 0;
}
