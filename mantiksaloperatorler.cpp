//mantiksal operatorler
#include <iostream> //input output kutuphanesi

// and == && ikisi de kullanilabilir
// or == || ikisi de kullanilabilir.

using namespace std;

int main()
{
    int sayi1,sayi2;
    cout << "lutfen birinci sayiyi giriniz: ";
    cin >> sayi1;
    cout << endl ;
    cout << "lutfen ikinci sayiyi giriniz :";
    cin >> sayi2;

    if(sayi1>0 and sayi2>0)
    {
        cout << "sayilar pozitif";
    }
    else if (sayi1<0 && sayi2<0)
    {
        cout << "sayilar negatif";
    }
    else
    {
        cout << "iki sayidan biri negatif biri pozitif";
    }
    return 0;
}
