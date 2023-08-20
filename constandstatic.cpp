//const(sabit) & static(tum program boyunca degismez)
#include <iostream> //input output kutuphanesi

using namespace std;
int deneme(int x)
{

   cout << x;
}

int main()
{
    const int sayi=9;
    //bu sayi degistirilemez.
    static int a=8;
    deneme(a);

    return 0;
}
