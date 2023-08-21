// Destructors
// rezerve edilmiş hafızadaki yerleri bırakmak için ya da bir sınıfa özgü işlemler temizleniceği zaman kullanılır.
#include <iostream> //input output kutuphanesi
#include "otomobil.h"
//ya fonksiyondan çıkınca silinir ya da pointerlarda delete kullanarak silinir.
using namespace std;


int main()
{
    Otomobil oto1("siyah",75);
    Otomobil oto2("pembe",100);

    /*Otomobil* p;
    p = &oto2;
    p->ruhsatBilgisiGoster(); //pointer nesneyi işaret ediyorsa içeriğine erişmek için bu işareti kullanıyoruz.
    cout << p->beygir;*/


    //yeni nesne oluşturmak için de pointerlar kullanılabilir.
    Otomobil* p;
    p = new Otomobil("sari",125); //coonstructor burda cagiriliyo
    p->ruhsatBilgisiGoster();
    delete p;//destructor burada cagiriliyo 
    //pointerla olusturulan nesnelerin mutlaka destructor edilmesi gerekiyor.


return 0;
}
