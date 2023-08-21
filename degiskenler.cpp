//Degiskenler
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    string isim = "Sumeyra usta"; // bir ya da daha fazla karakter dizinini tutar.
    int yas = 18; // tam sayilari tutar.
    char not_ortalamasi= 'a';//tek bir bytelik yer kapliyor.
    float sayisal_ort = 3.52 ;  // ondalik sayi
    bool sinava_girdi_mi = true ; //true or false (1/0)1 bitlik deger tutar.her dördünden birini yazsan da olur.

    cout << "Hi" << " Sumeyra" << endl;
    cout << isim << " yasi:" << yas;
    yas = 19; // burada farkli bir sayi atadik.
    cout << endl <<"yeni yas: " <<yas << endl;
    cout << "sayisal ort: "<< sayisal_ort << endl;
    cout << sinava_girdi_mi;
    return 0;
}
