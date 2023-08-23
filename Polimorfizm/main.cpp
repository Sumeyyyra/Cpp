//Polimorfizm/biyoloji
//çok biçimlilik,çok şekillilik demek.
//nesne pointerının farklı nesneler gibi davranabilmesi lazım ınheritance yapısı kurmamız lazım
//kedi de kopek de hayvan sınıfında yani hayvan sınıf kedi gibi de kopek gibi de davranabilir.
//polimorfizmi c++da kullanabilmemiz için Virtual Function kullanmamız gerekiyor.
//virtual olarak fonksyionu yazarsak hayvan sınıfındakiler kedi olsun köepk olsun bunları kullanabilirler.


#include <iostream> //input output kutuphanesi

using namespace std;




//base class(ata sınıf)
    class Hayvan
    {
    public:
        virtual void sescikar()
        {

            cout<< "hayvan sescikar fonksiyonu cagirildi..";
        }



   virtual void yazdir()
    {
        cout<<"hayvan ssinifinin yazdir metodu cagirildi";

    }
    };


    //child class
    class Kedi: public Hayvan
    {
    public:
        void sescikar()
        {
            cout << "miav";
        }
        void yazdir()
        {
            cout << "kedi sinifi yazdr cagirildi";
        }
    };

    //child class
    class Kopek: public Hayvan
    {
    public:
        void sescikar()
        {
            cout << "hav hav ";
        }
         void yazdir()
        {
            cout << "kopek sinifi yazdir cagirildi";
        }
    };

int main()
{
    Hayvan* pHayvan;
    Kedi Tekir;
    pHayvan= &Tekir;//çok biçimlilikden kastımız bu

    //pHayvan->sescikar();//virtual tanımladık burda değiştirdik
    pHayvan->yazdir();//ama bu virtual değil değişiklik yapamadık.
    Kopek kor;
    pHayvan = &kor;//çok biçimlilik bu 
    pHayvan->yazdir();

}







