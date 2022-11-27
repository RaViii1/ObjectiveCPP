#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "employee.h"

 class TeamLeader : public Employee{
    protected:
        string surname;
        int age;
        int experience;
        float salary;
    public:
        TeamLeader();
        TeamLeader (const string &surname, int age, int experience, float salary) : Employee(surname, age, experience, salary) {};
        float calculateBonus(int value) {return value * (1 + getSalary() + getExperience());} 
        // value*(1+salary+experience)
        void show(){
            cout<<""<<getSurname()<<" Wiek:"<<getAge()<<" - staz: "<<getExperience()<<"- placa: "<<getSalary()<<endl;
            cout<<"Jestem Team Leader z "<<getExperience()<<" letnim doswiadczeniem"<<endl;
        }
       
 };
#endif // !TEAMLEADER_H