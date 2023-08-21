// pointerlar ve classlar
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

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
    p = new Otomobil("sari",125);
    p->ruhsatBilgisiGoster();

return 0;
}
