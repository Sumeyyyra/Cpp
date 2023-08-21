#include "kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan(ad) {
    // Kedinin constructoru oluştururken hayvanın constructorunu da çağırdık
    // Ona gelecek "ad" parametresini Hayvan'a gönderdik
    // Ek yapılacak işlemler buraya yazılabilir
}

void Kedi::fareYakala(){

    cout << Hayvan::getIsim() << " fare yakaliyor.." ;

}


