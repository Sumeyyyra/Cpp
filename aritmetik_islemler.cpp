//Aritmetik islemler
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    string isim = "Sumeyra usta"; // bir ya da daha fazla karakter dizinini tutar.
    int yas = 18; // tam sayilari tutar.
    char not_ortalamasi= 'a';//tek bir bytelik yer kapliyor.
    float sayisal_ort = 3.52 ;  // ondalik sayi
    bool sinava_girdi_mi = true ; //true or false (1/0)1 bitlik deger tutar.her dördünden birini yazsan da olur.
    int not1 = 100;
    int not2 = 78;
    float not_ort= (not1+not2)/2;

    //ekrana yazdirma islemleri
    cout << "Hi" << " Sumeyra" << endl;
    cout << isim << " yasi:" << yas;
    yas = 19; // burada farkli bir sayi atadik.
    cout << endl <<"yeni yas: " <<yas << endl;
    cout << "sayisal ort: "<< sayisal_ort << endl;
    cout << sinava_girdi_mi;
    cout << endl <<"not ort= "<< not_ort;
    cout << endl << "notlar carpimi= " << not1*not2;
    return 0;
}
