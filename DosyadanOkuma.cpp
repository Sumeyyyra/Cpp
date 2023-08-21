//dosyaya binary ve text modda okuma işlemi
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
   file.open("test.txt",ios::in | ios::binary);// (c:\\test\\dosyaAdi.txt)bu şekilde yazdığımız adresdeki dosyayı açar
   //ios::in okuma modunda aç demek
    //ios::binary mp3 mp4 fark etmez her şeyi okur.
    //ios::app dosyayı sıfırlamadan ekleyerek yazar.
    if(!file.is_open())
    {
        cout << "Dosya acilamiyor.";
    }
    else
    {   string str;
    while(getline(file,str))
    {

    //getline ilk satırı okur sadece ve eğer satırdan sonra başka bi şey yazıı değilse 0 verir yazılı ise 1 verir
        cout << str<<endl;
    }

        file.close();
    }
return 0;
}
