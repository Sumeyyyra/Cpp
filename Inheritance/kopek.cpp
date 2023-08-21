#include "kopek.h"

//Constructor
Kopek::Kopek(string ad) : Hayvan(ad) {
    // Kedinin constructoru oluştururken hayvanın constructorunu da çağırdık
    // Ona gelecek "ad" parametresini Hayvan'a gönderdik
    // Ek yapılacak işlemler buraya yazılabilir
}

void Kopek::havla(){

    cout << Hayvan::getIsim() << " havliyor.." ;

}



