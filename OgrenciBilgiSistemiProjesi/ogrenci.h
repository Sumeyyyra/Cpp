#pragma once
#include <iostream>


using namespace std;

class Ogrenci{
private:
    int id;
    string ad;
    int sinav_notu;

public:
Ogrenci(int _id,string _ad ,int _sinav_notu);
void setId(int _id);
void setAd(string _ad);
void setSinavNot(int _sinav_notu);
int getId();
string getAd();
int getSinavNotu();
void BilgileriYaz();



};

