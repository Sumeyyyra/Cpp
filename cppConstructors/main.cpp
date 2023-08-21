//OOP header dosyasiyla yapma
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

using namespace std;


int main()
{
    Otomobil oto1("siyah",75);
    Otomobil oto2("pembe",100);

    oto1.ruhsatBilgisiGoster();
    oto2.ruhsatBilgisiGoster();

return 0;
}
