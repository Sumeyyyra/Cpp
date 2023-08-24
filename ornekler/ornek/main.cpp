#include <iostream>
#include <list>
#include "hesap.h"
/*Sizden C++ Nesne Yönelimli Programlama bilgilerinizi kullanarak bankacılık İşlemleri için bir Class/Sinif yazmanız isteniyor. Sınıfınızda tutulacak veriler:
Hesap sahibinin adı
• Hesap numarası
• Bakiye
Yazacağınız sınıfın aşağıdaki işlemleri yapabilmesi isteniyor:
• Hesapların ilk değer olarak bakiyesinin 0 atanması gerekir. • Hesaba para yatırılabilir
Hesaptan para çekilebilir
Hesap detay bilgisi görüntülensin (ad, hesap no ve bakiyesi)
Sınıfınızı yazdıktan sonra main içerisinde bu sınıfı kullanarak aşağıdaki kişiler için bir hesap oluşturun:
Ad: Ali Kayahan
Hesap no: 172123
Bakiye: 250,75
*/
using namespace std;
void islemler(){


}

void menu()
{   cout <<"**************************\n";
    cout <<"         BANKA            \n";
    cout <<"**************************\n";
    cout <<"1.Hesap bilgileri goruntuleme\n";
    cout <<"2.Hesaptan para cekme\n";
    cout <<"3.Hesaba para yatirma\n";
    cout <<"4.Cikis\n";

}
int main()
{
    int secim;





    do{
        menu();
        cout << "Lutfen bir secim yapiniz: ";
        cin >> secim;
        if(secim==1)
        {   int num;
            float bak;
            string adi;
            cout<<"ad:";
            cin >>adi;
            cout<<"numarası:";
            cin >>num;
            cout<<"bakiyesi:";
            cin >>bak;
            Hesap hesap(num,bak,adi);
            cout <<"hesap bilgileriniz alindi..";
        }
        else if(secim ==2)
        {   float ekle;
            cout << "yatirmka istediginiz bakiye nedir?";
            cin >> ekle;
            Hesap* hesap = new Hesap();
float bakiye = hesap->getBakiye();


        }
        else if(secim ==3)
        {


        }
        else if(secim ==4)
        {
            cout <<"Cikis yapildi.."<<endl;
            break;

        }
        else{
            cout <<"Yanlis bir secenek isaretlediniz!!Lutfen tekrar deneyin...\n";
        }
    }while(secim!=4);





}
