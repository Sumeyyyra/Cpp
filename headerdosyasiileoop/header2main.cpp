//OOP header dosyasiyla yapma
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

using namespace std;


int main()
{
    Otomobil oto1,oto2;

    oto1.beygir=46;
    oto2.renk="kirmizi";
    oto1.renk="beyaz";
    oto2.beygir=75;

    oto1.ruhsatBilgisiGoster();


return 0;
}
