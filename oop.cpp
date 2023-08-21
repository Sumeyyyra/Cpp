//OOP
#include <iostream> //input output kutuphanesi

using namespace std;

class Otomobil { // this is not real object.
public:
    string renk;

};

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
