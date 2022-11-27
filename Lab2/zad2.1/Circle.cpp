#include<iostream>
#include "figure.h"
#include "circle.h"
using namespace std;
Circle::Circle (float r1) {
    r = r1;
    cout<<"Konstruktor w klasie Circle"<<endl;
}
Circle::~Circle () {
    cout<<"Destruktor w klasie Circle"<<endl;
}
void Circle::calculateArea () {
    float obw = 3.141 * r * r;
    setArea(obw);
}
void Circle::calculatePerimeter () {
    float obw = 3.141 * r * 2;
    setPerimeter(obw);
}