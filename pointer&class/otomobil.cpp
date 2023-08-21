#include "otomobil.h"

//biz constructor yazmadığımız zamna Otomobil::Otomobil(){} adında constructor vardı zaten.
//otomobil constructor
Otomobil::Otomobil(string _renk,int _beygir){
   renk = _renk;
   beygir =_beygir;

}


void Otomobil::ruhsatBilgisiGoster(){
    cout << "beygir:" << Otomobil::beygir<< endl;
    cout << "renk:" << Otomobil::renk <<endl <<endl;


}

