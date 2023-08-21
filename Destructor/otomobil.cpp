#include "otomobil.h"

//biz constructor yazmadýðýmýz zamna Otomobil::Otomobil(){} adýnda constructor vardý zaten.

//otomobil constructor
Otomobil::Otomobil(string _renk,int _beygir){
   renk = _renk;
   beygir =_beygir;
    cout << "Donstructor cagirildi" << endl;
}

//otomobil destructor
Otomobil::~Otomobil()
{
    cout << "Destructor cagirildi";
}

void Otomobil::ruhsatBilgisiGoster(){
    cout << "beygir:" << Otomobil::beygir<< endl;
    cout << "renk:" << Otomobil::renk <<endl <<endl;


}

