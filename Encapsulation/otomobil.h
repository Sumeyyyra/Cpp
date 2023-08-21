#pragma once
#include <iostream>

using namespace std;

class Otomobil {
public:
    string renk;
    int beygir ;

    void ruhsatBilgisiGoster();
    Otomobil(string _renk,int _beygir);

    void setMy(int _my);
    int getMy();
};
