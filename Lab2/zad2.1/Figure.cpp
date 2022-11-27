#include <iostream>
#include "Figure.h"
using namespace std;
Figure::Figure() {
    cout<<"Konstruktor klasy bazowej Figure"<<endl;
}
Figure::~Figure() {
    cout<<"Wirtualny destruktor klasy bazowej Figure"<<endl;
}
float Figure::getArea () { return area; }
void Figure::setArea (float area1) { area = area1; }

float Figure::getPerimeter () { return obw; }
void Figure::setPerimeter (float perim) { obw = perim; }

void Figure::show () { cout<<"Pole: "<<area<<", Obwod: "<<obw<<endl; }