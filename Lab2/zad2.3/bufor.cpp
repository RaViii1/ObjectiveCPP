#include <iostream>
#include "bufor.h"
using namespace std;

Bufor::Bufor () {
    bufsize = 10;
    ptr = new int[bufsize];
    iterFirstFree = 0;
}
Bufor::Bufor(unsigned tabSize){
    bufsize = tabSize;
    ptr = new int[tabSize];
    iterFirstFree = 0;
}

void Bufor::add(int value)
{
    ptr[iterFirstFree] = value;
    iterFirstFree++;
}
void Bufor::show(){
    cout << "[";
    for(int i = 0; i < iterFirstFree; i++){
        cout << ptr[i] << ", ";

    }
    cout << "]\n";
}