//try & catch ile hata yakalama
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    int bolen;
    int bolunen;
    cout << "bolunen sayiyi girin :";
    cin >> bolunen;
    cout << "bolen sayiyi girin:";
    cin >> bolen;
    int sonuc;
    try{
    if(bolen == 0)
        throw 99;
    sonuc=bolunen/bolen;
    cout << "sonuc: "<<sonuc;
    }
    catch(int hata_mesaji){
        cout <<"bolen sayi 0 olamamli";

    }
    cout << endl;
    return 0;
}
