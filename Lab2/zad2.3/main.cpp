#include <iostream>
#include "bufor.h"
#include "bufor.cpp"
#include "meanbufor.h"
#include "maxbufor.h"


using namespace std;
int main () {
    MaxBufor b1(10);
    MeanBufor b2(10);
    b1.add(7);
    b1.add(6);
    b1.add(15);
    b1.show();

    return 0;
}