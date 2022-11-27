#ifndef MEANBUFOR_H
#define MEANBUFOR_H
#include <iostream>
#include "bufor.h"

using namespace std;

class MeanBufor : public Bufor {

public:

    MeanBufor(unsigned bufor_size) : Bufor(bufor_size) {}

    double calculate() override { 
        float avg= 0;
        for(int i = 0; i < getIndex(); i++)
        {
             avg += getTab(i);
        }
        avg /= getIndex();
        cout<<"Srednia elementow w tablicy wynosi: "<< avg << endl;
        return avg;
    }

};
#endif // !MEANBUFOR_H