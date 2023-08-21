//OOP header dosyasiyla yapma
#include <iostream> //input output kutuphanesi
#include "otomobil.h"

using namespace std;


int main()
{
 Otomobil oto1;
 Otomobil oto2,oto3;

 oto1.renk="siyah";
 oto2.renk="pembe";
 cout << "otomobil3 rengini girin:";
 cin >> oto3.renk;
 cout << endl << "oto3 renginiz "<<oto3.renk;

}
