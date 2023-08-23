#include <iostream>

using namespace std;
class Otomobil {
private:
    string marka;


public:
    int yil;
    Otomobil(string _marka,int _yil)
    {
        marka =_marka;
        yil = _yil;
    }
    friend void bilgileriGoster(Otomobil oto);//bilgilelriGoster benim friend metodumdur bu biilgilere erişmesine izin veriypru demek


};

void bilgileriGoster(Otomobil oto)
{
    cout <<oto.yil << " "<<oto.marka<<endl ;//burda markaya erişemeyiz classın içinde değil

}

int main() {

    Otomobil oto1("opel",2012);
    bilgileriGoster(oto1);



}
