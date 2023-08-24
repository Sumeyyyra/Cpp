#pragma once
#include <iostream>

using namespace std;

class Hesap{
private:
    int no;
    float bakiye;
    string ad;

public:
    Hesap(int _no,float _bakiye ,string _ad);
    void setNo(int _no);
    void setBakiye(float _bakiye);
    void setAd(string _ad);
    int getNo();
    float getBakiye();
    string getAd();
    void BilgiYaz();



};
