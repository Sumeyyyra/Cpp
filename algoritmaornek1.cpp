//kullanıcıdan bit  tamsayi iste ve o tamsayya kadar olan tüm asal sayilari yazdir.
#include <iostream> //input output kutuphanesi
#include <chrono> //kronometre özellikli kütüphane
using namespace std;


int main()
{
   int sayi,control;
   control =0;
   cout << "lutfen bir sayi girin.";
   cin >> sayi;
    //chrono::steady_clock::time_point begin = steady_clock::now();
   for(int i=2;i<=sayi;i++)
   {
       for(int j=2;j<i;j++)
       {
           if(i % j==0 )
           {
                control++;
           }

       }
       if(control==0)
       {
           cout << i <<" " ;

       }
       else
       {
           control=0;
       }

   }
   //chrono::steady_clock::time_point end = steady_clock::now();

return 0;}
