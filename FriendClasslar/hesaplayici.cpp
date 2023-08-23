#include <iostream>
#include "ogrenci.h"

using namespace std;

class Hesaplayici{
public:
    void ortalamaHesapla(Ogrenci ogrenci){
    int ortalama= (ogrenci.not1 + ogrenci.not2)/2;

    cout <<ogrenci.ad <<"ortalamsi: " << ortalama;
    }


};
int main(){
    Ogrenci ogrenci1("ali",70,80);
    Hesaplayici hesaplayici;
    hesaplayici.ortalamaHesapla(ogrenci1);
}
