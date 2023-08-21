//Sınıf özelliklerinde Poiterlar nasıl kullanılır.
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

using namespace std;


int main()
{
    Otomobil oto1("siyah",75,2);
    Otomobil oto2("pembe",100,5);

    /*Otomobil* p;
    p = &oto2;
    p->ruhsatBilgisiGoster(); //pointer nesneyi işaret ediyorsa içeriğine erişmek için bu işareti kullanıyoruz.
    cout << p->beygir;*/


    //yeni nesne oluşturmak için de pointerlar kullanılabilir.
    Otomobil* p;
    p = new Otomobil("sari",125,4); //coonstructor burda cagiriliyo
    //p->ruhsatBilgisiGoster();
    cout <<"otonew kapi sayisi: " <<*(p->pKapiSayisi)<<endl;

    delete p;//destructor burada cagiriliyo
    //pointerla olusturulan nesnelerin mutlaka destructor edilmesi gerekiyor.

    //pointerla yazdığımız sınıf özelliğine erişebiliriz
    cout <<"oto1 kapi sayisi: " <<*(oto1.pKapiSayisi)<<endl;

return 0;
}
