#include <iostream>
#include "ogrenci.h"
#include <list>


using namespace std;


void menu()
{
    cout <<"* * * * * * * * * * * * * * * * * * " <<endl;
    cout <<"               MENU                 "<<endl;
    cout <<"* * * * * * * * * * * * * * * * * * " <<endl;

    cout <<"1.Yeni kayit"<<endl;
    cout <<"2.Tum listeyi goster"<<endl;
    cout <<"3.Ogrenci id ye gore kayit sil"<<endl;
    cout <<"4.Ogrenci ara"<<endl;
    cout <<"5.Cikis";

}

void ogrenciEkle(list<Ogrenci> *lst)
{

    string ogrenci_ad;
    int ogrenci_id,ogrenci_not;
    cout << "Ogrencinin adini girin: ";
    cin >>ogrenci_ad;
    cout << "Ogrencinin idsini girin: ";
    cin >>ogrenci_id;
    cout << "Ogrencinin notunu girin: ";
    cin >>ogrenci_not;
    Ogrenci yeni_ogrenci(ogrenci_id,ogrenci_ad,ogrenci_not);
    lst->push_back(yeni_ogrenci);
}
void listeyiGoster(list<Ogrenci> *lst)
{
    list<Ogrenci>::iterator itr;
    for(itr =lst->begin(); itr !=lst->end(); itr++)
    {
        itr->BilgileriYaz();
    }
    cout<<endl;


}
void OgrenciyiSil(list<Ogrenci> *lst)
{
    int number;
    cout<<"Silmek istediginiz id'yi yaziniz: ";
    cin >> number;

    list<Ogrenci>::iterator itr;
    for(itr =lst->begin(); itr !=lst->end(); itr++)
    {
        if(itr->getId() == number)
        {
            break;
        }


    }
    lst->erase(itr);
    cout <<endl<< number <<"idli ogrenci silindi";
    cout<<endl;



}
void OgrenciAra(list<Ogrenci> *lst)
{

    int number;
    cout << "Aramak istediginiz ogrencinin idsini giriniz:";
    cin >> number;
    list<Ogrenci>::iterator itr;

    for(itr =lst->begin(); itr !=lst->end(); itr++)
    {
        if(itr->getId() == number)
        {
            int sec;
            cout << number<<" idli ogrencimiz listede vardır."<<endl;
            cout << "Ogrencinin bilgilerini ogrenmek istiyorsaniz 1'e,istemiyorsaniz 2'ye basiniz!!!";
            cin >> sec;
            if(sec==1)
            {
                itr->BilgileriYaz();

            }
            else if(sec==2)
            {
                cout << "Ana menuye yonlendiriliyorsunuz...";
                break;
            }
            else
            {
                cout<<"Hatalı sayi girdiniz..."<<endl;
                cout << "Ana menuye yonlendiriliyorsunuz...\n";
                break;
            }


        }
        else
        {
            cout << number << " idli ogrencimiz listede yoktur.\n";
        }

    }

}
int main()
{

    list<Ogrenci> *ogrenciList = new list<Ogrenci>();//ogrenci tipindeki şeyleri tutucak


    int secim=0;
    do
    {


        menu();
        cout <<endl<<"Seciminiz: "<<endl;
        cin >> secim;
        if(secim==1)
        {
            ogrenciEkle(ogrenciList);
        }
        else if(secim==2)
        {
            listeyiGoster(ogrenciList);
        }
        else if(secim==3)
        {
            OgrenciyiSil(ogrenciList);
        }
        else if(secim==4)
        {
            OgrenciAra(ogrenciList);
        }
        else if(secim==5)
        {
            cout << "Cikis yapildi...";
            break;
        }
        else
        {
            cout<<"Yalnis secim yaptiniz tekrar deneyin!!" <<endl ;
        }

    }
    while(secim!=5);



    return 0;
}

