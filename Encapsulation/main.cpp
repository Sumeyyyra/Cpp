//Encapsulation (direkt sizin sınıfınızın özelliklerine erişimini yasak edelim)
//Sınıfınızın hiç bir özelliği hepsini private yapın
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

using namespace std;


int main()
{
    Otomobil oto1("siyah",75);
    Otomobil oto2("pembe",100);
    oto1.setMy(2020);
    oto1.ruhsatBilgisiGoster();
    oto2.ruhsatBilgisiGoster();
    cout << oto1.getMy();

return 0;
}
