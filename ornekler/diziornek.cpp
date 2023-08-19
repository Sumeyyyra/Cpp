//kullanıcıdan 4 tan esayi alin ve bunları ters cevirip yazdirin.
#include <iostream> //input output kutuphanesi

using namespace std;


int main()
{
    int dizi[4];
    for(int i=0;i<4;i++)
    {
        cin >> dizi[i];
    }
    cout <<endl;
    int yenidizi[4];
    int k=3;
    for(int i=0;i<4;i++)
    {
        yenidizi[i]=dizi[k];
        k--;
    }
    for(int i=0;i<4;i++)
    {
        cout <<" "<< yenidizi[i];
    }
}
