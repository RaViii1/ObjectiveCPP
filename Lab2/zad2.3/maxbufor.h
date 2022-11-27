#ifndef MAXBUFOR_H
#define MAXBUFOR_H
#include <iostream>
#include "bufor.h"

using namespace std;
class MaxBufor : public Bufor {

    public:
     
     MaxBufor(unsigned buf_size) : Bufor(buf_size) {}
     double calculate() override {
        int max = getFirst();
        for (int i = 0; i < getIndex(); i++) {
            if(max < ptr[i])
            {
                max = ptr[i];
            }
            
        }
        cout <<"Maksymalna wartosc z tablicy: "<< max << endl;

        return max;
    }

    void add(int value) override {
        if(getIndex() >= getSize()){
            cout <<"Brak miejsca w tablicy: "<<endl;
        }else{
            setTab(getIndex(), value);
            setFirst(getIndex() + 1);
        }
        
    }

};

#endif // !MAXBUFOR_H