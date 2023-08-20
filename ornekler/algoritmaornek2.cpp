//kullanıcıdan 4 basamakli bir sayi iste ve bu sayinin basamaklari birbiryle aynı mı onu kontrol et.
#include <iostream> //input output kutuphanesi

using namespace std;


int main()
{
    int sayi;
    cout << "lutfen dort basamakli bir sayi girin.";
    cin >> sayi;
    //sayiyi basamaklarina ayirma
    int birler,onlar,yuzler,binler;
    binler=sayi/1000;
    yuzler = (sayi - (binler*1000))/100;
    onlar = (sayi - (binler*1000) - (yuzler * 100))/10;
    birler = (sayi - (binler*1000) - (yuzler * 100) - (onlar * 10) );
    int control=0;
    if(birler!=onlar && birler!=yuzler && birler!=binler && onlar!=yuzler && onlar!=binler && yuzler!=binler)
    {
        cout << endl <<"sayilarin basamaklari birbirinden farklidir.";

    }
    else{
        cout << endl <<  "sayinin basamaklarindan ayni olanlar var.";
    }





    return 0;
}
