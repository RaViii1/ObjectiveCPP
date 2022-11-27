#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "employee.h"

class  Developer : public Employee{

    public:
        Developer (const string &surname, int age, int expirience, float salary) : Employee(surname, age, expirience, salary) {};
        float calculateBonus (int value) {return value + 0.2 * value * (getSalary() + getExperience());}
        void show();
        //value+0.2*value*(salary+experience).

 };
#endif // !DEVELOPER_H