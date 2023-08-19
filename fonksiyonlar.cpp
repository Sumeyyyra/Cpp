//fonksiyonlar
#include <iostream> //input output kutuphanesi

using namespace std;

int alanhesabi(int en,int boy){

int alan=en *boy;
return alan;
}
int main()
{
  int en ,boy;
  cout <<"sirayla en ve boyu gir ";
  cin >> en >> boy;

  cout << alanhesabi(en,boy);

}
