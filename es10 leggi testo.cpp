#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("C:\\Users\\PC\\Desktop\\ANDREA\\testo.txt");
    if(f)
    {
        string riga=" ";
        while (getline(f,riga))
            cout << riga <<endl;
    f.close();
    f.clear();
    }
    return 0;
}
