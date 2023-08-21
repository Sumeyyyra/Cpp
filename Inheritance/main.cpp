//Inheritance/Kalıtım
//Kalıtım bir sınıfın üst sınıfdan bazı özellikleri miras almasına denir.Bazı programlama dilinde yasak birden fazla kalıtım yapmak(java)
#include <iostream> //input output kutuphanesi
#include "hayvan.h"
#include "kedi.h"
#include "kopek.h"
#include "kus.h"
using namespace std;


int main()
{
    Kus h("boncuk");
    h.beslen();
    h.uyu();
    h.uc();
    return 0;
}
