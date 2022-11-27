#include <iostream>
#include "Array.h"

template <typename T> Array<T>::Array (unsigned array_size) {
        this->max_size = array_size;
        this->firstFree = 0;
        this->element = new T[max_size];
}

template <typename T> Array<T>::Array(){
            max_size = 10;
            element = new T[max_size];
            firstFree = 0;
        }

template <typename T> Array<T>::~Array () {
    delete [] this->element;
    delete this;
}

template <typename T> void Array<T>::SortUp(){
         T temp;
          for(int i = 0; i < max_size; i++){
             for(int j = i+1 ; j < max_size; j++){
                     if(element[i]>element[j]){
                         temp = element[i];
                         element[i] = element[j];
                         element[j] = temp;
                     }
                }
             }
}
template <typename T> T Array<T>::MaxInArray() {
    T arr_max = element[0];
    for(int i = 0 ; i < firstFree ; i++){
        if(element[i]>arr_max) arr_max = element[i];
                
        }
    cout << "MaxInArray is: " << arr_max << endl;
    return arr_max;
}
template <typename T> void Array<T>::Add(const T &value){
    element[firstFree] = value;
    firstFree++;
}

template <typename T> T Array<T>::elem_at(int index) {
    if( index >= firstFree ){
        cout << "Index out of bounds"<<endl;
        return element[0];
    }
    return element[index];
}
        ////For strings
        template <>void Array<string>::SortUp(){
            int temp;
            int tempLenght;
          for(int i = 0; i < max_size; i++){
                for(int j = i+1 ; j < max_size; j++){
                if(element[i].length() > element[j].length()){
                    swap(element[i], element[j]);
                }
            }   
        }
}

    template <> string Array<string>::MaxInArray() {
        string arr_max = element[0];
        unsigned max_len = arr_max.length();
        for (unsigned i = 1; i < firstFree; i++) {
            if (element[i].length() > max_len) {
                arr_max = element[i];
                max_len = element[i].length();
            }
        }
        cout << "Array max: " << arr_max << endl;
        cout<< "String length: " << max_len << endl;
    return arr_max;
}
