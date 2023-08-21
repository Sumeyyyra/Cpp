#include "otomobil.h"

//biz constructor yazmadýðýmýz zamna Otomobil::Otomobil(){} adýnda constructor vardý zaten.

//otomobil constructor
Otomobil::Otomobil(string _renk,int _beygir,int kp){
   renk = _renk;
   beygir =_beygir;
   pKapiSayisi = new int (kp); //= *pKapiSayisi = kp;
    cout << "Constructor cagirildi" << endl;
}

//otomobil destructor
Otomobil::~Otomobil()
{
    cout << "Destructor cagirildi"<< endl;
}

void Otomobil::ruhsatBilgisiGoster(){
    cout << "beygir:" << Otomobil::beygir<< endl;
    cout << "renk:" << Otomobil::renk <<endl <<endl;


}

