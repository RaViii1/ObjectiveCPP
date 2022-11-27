#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <iostream>

using namespace std;


class Employee {
    protected:
        string surname;
        int age;
        int experience;
        float salary;
    public:
        Employee(const string &surname1, int age1, int experience1, float salary1): surname(surname1), age(age1), experience(experience1), salary(salary1){};
        Employee();
        virtual ~Employee();
        virtual void show();
        virtual float calculateBonus (int value) = 0;
        virtual int calculateSalaty(int value){return salary;}
        int ageEmployment();
        void setData(string surname, int age, int experience, int salary);
            

        string getSurname();
        int getAge();
        int getExperience();
        float getSalary();

        void whoWorkMoreThan5Years(Employee **E, int size);
        void howManyEarnLessThanMeanBonus(Employee **E, int size);

 };

 

 
#endif // EMPLOYEE_H_INCLUDED