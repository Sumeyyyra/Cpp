//dowhile
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");//turkçe karakter kullanmamizi saglar.

    int sayi;
    do
    {
        cout << "4 sayisini girin:";
        cin >> sayi;

    }while(sayi !=4);
}
