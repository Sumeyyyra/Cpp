//if/else kullanimi
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    int sifre;
    cout <<"lutfen bir sifre girin : ";
    cin >> sifre;
    cout <<"sifreniz belirlendi..." ;

    int kullanicisifredenemesi;
    cout<< endl <<"lutfen sifreyi girin:";
    cin >> kullanicisifredenemesi;

    if(kullanicisifredenemesi == sifre)
        cout << "sifre dogrulandi";
    else
        cout << "sifre yanlis";


    return 0;
}
