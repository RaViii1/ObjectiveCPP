#include <iostream>
#include "bufor.h"
#include "meanbufor.h"
#include "maxbufor.h"
#include "bufor.cpp"
#pragma GCC optimize("O2")
using namespace std;
int main () {

    Bufor* b = new MaxBufor(10);
    Bufor* b2 = new MeanBufor(10);
    b->add(2);
    b->add(9);
    cout<<"Max bufor: "<<b->calculate()<<endl;
    cout <<"Bufor 2 content:" <<endl;
    b2->add(9);
    b2->add(3);
    b2->add(5);
    b2->show();
    cout<<"Mean bufor: "<<b2->calculate()<<endl;
    Bufor *b3 = new MaxBufor(3);
    b3->add(51);
    b3->add(82);
    b3->add(24); 
    b3->add(1); // Error
    b3->show();

    return 0;
}