#ifndef STUDENT_H_INCLUDED
 #define STUDENT_H_INCLUDED
 #include <iostream>
 #include "Person.h"
 using namespace std;
 
  class Student : private Person{
      string index;
      string name;
      string surname;
   
   public:
   Student(string name2, string surname2, string index1);
   Student();
   void setIndex(string newIndex);
   void getIndex();
   void showInfoStudent();
   void init(string name2, string surname2, string index1);
 };
#endif // PERSON_H_INCLUDED