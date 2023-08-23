//Polimorfizm/biyoloji


#include <iostream> //input output kutuphanesi

using namespace std;




//base class(ata sınıf)
    class Hayvan
    {
    public:
        virtual void uckezsescikar()
        {
            for(int i=0;i<3;i++)
            {
               cout<< "hayvan uckezsescikar fonksiyonu cagirildi..";
            }

        }




    };


    //child class
    class Kedi: public Hayvan
    {
    public:

        void uckezsescikar()
        {
            for(int i=0;i<3;i++)
            {
                cout << "miav ";
            }

        }
    };

    //child class
    class Kopek: public Hayvan
    {
    public:

           void uckezsescikar()
        {
            for(int i=0;i<3;i++)
            {
                cout << "hav ";
            }

        }
    };

int main()
{
    Hayvan* pHayvan;
    Kedi Tekir;
    pHayvan= &Tekir;//çok biçimlilikden kastımız bu
    pHayvan->uckezsescikar();
    cout << endl;

    Kopek kor;
    pHayvan = &kor;//çok biçimlilik bu
    pHayvan->uckezsescikar();

}







