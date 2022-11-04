#include <iostream>
using namespace std;
/*
void scambia (int* a,int* b)
{
    int t=*a;*a=*b;*b=t;
}
int main()
{
    int x=0,y=0;
    cout << "INSERIRE DUE NUMERI";
    cin >> x >> y;
    cout <<"X: "<<x <<"Y: " << y;
    scambia(&x,&y);
    cout <<endl;
    cout <<"X: "<<x <<"Y: " << y;
    return 0;
}*/
///////////////////////////////////////////////////
void scambia (int& a,int& b)
{
    int t=a;a=b;b=t;
}
int main()
{
    int x=0,y=0;
    cout << "INSERIRE DUE NUMERI";
    cin >> x >> y;
    cout <<"X: "<<x <<"Y: " << y;
    scambia(x,y);
    cout <<endl;
    cout <<"X: "<<x <<"Y: " << y;
    return 0;
}

