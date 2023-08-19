//1den kullanicinin girdigi sayiya kadar 7'nin katlarini yazan kodu yaz
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");//turkçe karakter kullanmamizi saglar.

    int yedi=7;
    int sayi;

    cout << "bir sayi girin:";
    cin >> sayi;

    while(sayi>=1)
    {
        if(sayi%7==0)
            {cout << sayi <<endl;}
        sayi--;
    };


}
