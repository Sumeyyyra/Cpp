#include <iostream>

//Tek boyutlu bir tamsayi dizisinin içinde 2'ye tam bölünebilen sayıların karesi hesaplayıp
//bu sayıların yerine yazan (yani diziyi değiştiren)bir Fonksiyon yazın.
//Dizinin son halini ekrana yazdırın

//Örn:
//dizi= {2,7,12}
//ise
//fonskiyon çağrısı sonrası:
//dizi ={4,7,144}


using namespace std;

int main()
{
    int dizi[3];
    cout << "Uc adet rakam giriniz: ";
    cin >> dizi[0]>>dizi[1]>> dizi[2];

    cout <<endl<<"Girdiginiz dizi: ";
    for(int i=0;i<3;i++)
    {
        cout << dizi[i] <<" ";
    }



    for(int i=0;i<3;i++)
    {
        if(dizi[i]%2==0)
        {
            dizi[i]=dizi[i]*dizi[i];
        }

    }
    cout << endl <<"Son dizi:";
    for(int i=0;i<3;i++)
    {
        cout << dizi[i] <<" ";
    }





}
