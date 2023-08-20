//dinamik bellek yonetimi new & delete
#include <iostream> //input output kutuphanesi

using namespace std;

int main()
{

  /*  int *c = new int;
    *c = 7;
    cout << *c;
    delete c; //cyi silmez adresi ve değeri boş olarak devam eder.
    cout << *c;*/
    int x;
    int *p=new int[x];
    cout << " kaclik dizi istiiyorsunuz: ";
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> p[i];
    }

    cout << p[1];

}
