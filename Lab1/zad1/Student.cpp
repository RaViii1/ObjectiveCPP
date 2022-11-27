#include<iostream>
 #include "Student.h"

Student::Student(string name1, string surname1, string index1){
    name=name1;
    surname=surname1;
    index=index1;
    cout<<"Konstruktor pochodzi z klasy Student"<<endl;
 }

 Student::Student(){}


void Student::setIndex(string index1){  
    index=index1;
 }

void Student::showInfoStudent(){
    cout<<"Imie: "<<name<<" nazwisko: "<< surname<<"\t Index: "<< index <<endl;
}

void Student::init(string name1, string surname1, string index1)
 {
   name=name1;
   surname=surname1;
   index=index1;
}