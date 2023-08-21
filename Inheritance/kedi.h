#pragma once
#include "hayvan.h"

//Inheritance oluşturduk kedi için
class Kedi : public Hayvan{

public:
    Kedi(string ad);
    void fareYakala();
};
