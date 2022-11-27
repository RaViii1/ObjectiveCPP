#include <iostream>
using namespace std;

 template <typename T>
 void minArray(const T* tab, int size)
 {
    T  min;
    min = tab[size];
    for (int i = size; i >= 0; i--){
        if(min>tab[i]){
            min = tab[i];
        }
    }
    cout<<"Minimalny element w tablicy to: " << min << endl;

 }

 int main(int argc, char** argv)
 {
    int tab[8] = {7,1,2,3,4,5,6,7};
    int size = 8;
    minArray(tab, 5);

 }