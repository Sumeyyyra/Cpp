//dosyaya binary ve text modda yazma işlemi
#include <iostream> //input output kutuphanesi
//ifstream dosyadan okuma yapar sadece
//ofstream dosyaya bi şeyler yazarsınız
//fstream dosyaya her ikisini de yapmanız sağlar
#include <fstream>
#include <string>

using namespace std;


int main()
{

   fstream file; //fstream tipinde bir nesne kullanabiliyoruz artık
   file.open("test.txt",ios::out | ios::binary | ios::app);// (c:\\test\\dosyaAdi.txt)bu şekilde yazdığımız adresdeki dosyayı açar
   //ios::out yazma modunda aç demek eğer böyle bir dosya yoksa oluştur demek
    //ios::binary mp3 mp4 fark etmez her şeye yazar.
    //ios::app dosyayı sıfırlamadan ekleyerek yazar.
    if(!file.is_open())
    {
        cout << "Dosya acilamiyor.";
    }
    else
    {   file << endl; //alt satira gecer
        string str = "hii";
        file << str; //dosyaya stryi yazdirir
        file.close();
    }
return 0;
}
