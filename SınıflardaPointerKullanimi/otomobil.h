#pragma once
#include <iostream>

using namespace std;

class Otomobil {
public:
    //constructor
    Otomobil(string _renk,int _beygir, int kp);

    //Destructor
    //once header dosyamıza destructorsı yazıyoruz bunu publicde yapıyoruz
    ~Otomobil();//ben böyle bir şey yazıcam talimatı veriyoruz header dosyasında

    string renk;
    int beygir ;
    int *pKapiSayisi;


    void ruhsatBilgisiGoster();


};
