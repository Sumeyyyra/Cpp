#pragma once
#include <iostream>


using namespace std;

class Hayvan{

public:
    Hayvan(string ad);//constructor kullanıcağını belirt
    void beslen();
    void uyu();
    void setIsim(string ad);
    string getIsim();


private://protected yapsaydık getIsime setIsime gerek kalmıyo alt sınıflarda kulllanırız bu sayede 
//sadece alt sınıflar görüp kullanır.
    string isim;

};
