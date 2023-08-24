//List
#include <iostream>
#include <list>//list kullanabilmemiz için kütüphane

using namespace std;

void printList(list<int> _lst)
{   //iterator aslında pointer görevi görüyo
    list<int>::iterator itr;
    for(itr = _lst.begin();itr !=_lst.end();itr++)
    {
        if(*itr==8)
        {
            *itr=7;

        }
        cout << *itr <<" ";
    }

}
int main()
{


list<int> lst;//lst adında int degeri tutan liste tanımladık.
lst.push_back(5);//listenin sonuna ekler
lst.push_back(8);
lst.push_front(8);//push_front listenin önüne ekler.

//lst.pop_back();//listenin sonundaki elemanı siler.
//lst.pop_front();//listenin önündekini çıkarır.


//istediğimiz yerde lsteye sayi ekleme
printList(lst);
list<int>::iterator it;
it = lst.begin();
it++;
it++;
lst.insert(it,9);
cout << endl;
printList(lst);

it =lst.begin();
it++;
lst.insert(it,2,6);//2 tane 6 ekledi 2.satıra
cout << endl;
printList(lst);

//arada eleman silme
it =lst.begin();
it++;
it++;
it++;
lst.erase(it);
cout << endl;
printList(lst);

    return 0;

}
