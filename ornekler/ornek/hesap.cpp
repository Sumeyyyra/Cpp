#include <iostream>
#include "hesap.h"

using namespace std;

Hesap::Hesap(int _no ,float _bakiye,string _ad)
{
    no=_no;
    ad=_ad;
    bakiye =_bakiye;
}
void Hesap::setNo(int _no){

no=_no;
}
void Hesap::setBakiye(float _bakiye){

 bakiye =_bakiye;
}

void Hesap::setAd(string _ad){

 ad=_ad;
}


int Hesap::getNo()
{
    return no;
}

float Hesap::getBakiye()
{
    return bakiye;

}

string Hesap::getAd()
{
    return ad;
}


void Hesap::BilgiYaz(){
cout <<"Kullanici bilgileri:\n" <<"ad: "<<ad<<endl << "hesap no: "<<no <<endl <<"bakiye: "<<bakiye <<endl;

}
