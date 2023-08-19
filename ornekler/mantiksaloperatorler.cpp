//ornek2
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    int sayi1,sayi2,sayi3;
    cout << "sayilari giriniz: ";
    cin >> sayi1 >> sayi2 >> sayi3;
    if(sayi1 >=sayi2 && sayi1 > sayi3)
    {
        cout << sayi1 <<"en buyuk sayi";
    }
    else if (sayi2 >=sayi1 && sayi2 > sayi3)
    {
        cout << sayi2 <<"en buyuk sayi";
    }
    else
    {
        cout << sayi3 <<"en buyuk sayi";
    }
}
