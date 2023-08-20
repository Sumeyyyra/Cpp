//Call by Value & call by reference
//call by valueda sayinin kopyasını olsuturur
//call by referencede adresine gidip değişiklik ypar (&)
#include <iostream> //input output kutuphanesi

using namespace std;
int degerdegistirme(int& deger)
{
    deger=0;
}
int main()
{
    int sayi=6;
    degerdegistirme(sayi);
    cout << sayi;
}
