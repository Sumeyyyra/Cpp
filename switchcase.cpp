//switch/case
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");//turkçe karakter kullanmamizi saglar.
   cout << "lütfen bir sayi girin:";
   int sayi;
   cin >> sayi;

   switch(sayi)
       {
    case 1:
        cout << "a";
        break;//eğer her casede break kullanmazsak her case'e girer.
    default:
        cout << "b";
        break;
       }



}
