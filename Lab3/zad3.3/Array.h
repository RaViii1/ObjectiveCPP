#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include<iostream>
using namespace std;

template<typename T>
class Array{
    private:
        T* element;
        unsigned  max_size;
        unsigned  firstFree;
    public:
        Array (unsigned array_size);
        Array();
        ~Array(); 
        void SortUp();
        T MaxInArray();
        void Add(const T &value);
        T elem_at(int index);
        void Show(){
            cout<<"Tablica: "<<endl;
            cout << "[";
            for(int i = 0; i < max_size; i++){
                cout << elem_at(i) << ", ";
            }
                cout << "]\n";
            }
   
};
#include "array.tpp"
#endif // ARRAY_H_INCLUDED