#include <iostream>
#include "ogrenci.h"

using namespace std;

//Constructor
Ogrenci::Ogrenci(int _id,string _ad,int _sinav_notu)
{
    id =_id;
    ad =_ad;
    sinav_notu =_sinav_notu;
}
void Ogrenci::setId(int _id)
{

    id = _id;

}
void Ogrenci::setAd(string _ad)
{

    ad = _ad;

}
void Ogrenci::setSinavNot(int _sinav_notu)
{

    sinav_notu=_sinav_notu;

}
int Ogrenci::getId()
{

    return id;

}
string Ogrenci::getAd()
{

    return ad;

}
int Ogrenci::getSinavNotu()
{

    return sinav_notu;

}

void Ogrenci::BilgileriYaz()
{
    cout <<"id: " <<id<<" ad: "<<ad<<" not: "<<sinav_notu<<endl<<endl;

}
