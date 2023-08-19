//kullanicidan aldigi sayinin faktoriyelini alan kod
#include <iostream> //input output kutuphanesi
//break: dçonguyu sonlandirir
//continue : altında kalan kısmı atlar döngünün başına döner.
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");//turkçe karakter kullanmamizi saglar.
    int sayi;
    cout << "sayi girin:";
    cin >> sayi;
    int fak=1;
    for (int i=1;i<=sayi;i++)
    {
        fak=i*fak;
    }

    cout << fak;
}
