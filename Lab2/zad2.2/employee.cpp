 #include <iostream>
 #include "employee.h"
 #include "developer.h"
 #include "teamleader.h"
 using namespace std;

 Employee::Employee(){
 }
/*
 Employee::Employee(string &surname1, int age1, int experience1, float salary1){
   surname = surname1;
   age = age1;
   experience = experience1;
   salary = salary1;
 }
*/

 void Employee::setData(string surname1, int age1, int experience1, int salary1)
            {
                cout << "Podaj Nazwisko: " ;
                cin >> surname;
                surname1 = surname1;
                cout << "Podaj wiek: " ;
                cin >> age;
                age = age1;
                cout << "Podaj doświadczenie: " ;
                cin >> experience;
                experience = experience1;
                cout << "Podaj wynagrodzenie: " ;
                cin >> salary;
                salary=salary1;
            }

        
         string Employee::getSurname () {
            return surname;
        }
        int Employee::getAge(){
            return age;
        }  
        int Employee::getExperience(){
            return experience;
        }
        float Employee::getSalary(){
            return salary;
        }    
int Employee::ageEmployment(){
    int wiek=0;
    wiek = age-experience;
    cout << "Wiek w momencie zatrudniena: "<< wiek <<endl;
    return wiek;
}
Employee::~Employee(){
    //cout << "Virtual destructor" << endl;
}

void Employee::show(){
    cout << "Nazwisko: " << surname  <<endl;
    cout << "Wiek :" << age <<endl;
    cout << "Doświadczenie: " <<experience <<endl;
    cout << "Wynagrodzenie: "<< salary  <<endl<<endl; 
}


void whoWorkForMoreThan5Years (Employee **E, int n) {
    cout << "\nPracownicy z doswiadczeniem wiekszym niz 5 lat: "<< endl;
    for (int i = 0; i < n; i++) {
        if (E[i]->getExperience() > 5) E[i]->show();
    }
}

/*
Developer::Developer( string &surname1, int age1, int experience1, float salary1) : Employee(surname1, age1, experience1, salary1){
        surname = surname1;
        age = age1;
        experience = experience1;
        salary = salary1;
}
*/
void Developer::show(){
    cout << "\nNazwisko: " << surname  <<endl;
    cout << "Wiek :" << age <<endl;
    cout << "Doświadczenie: " <<experience <<endl;
    cout << "Wynagrodzenie: "<< salary  <<endl; 
}
/*/
float Developer::calculateBonus(int value){
    
    value = value+0.2*value*(salary+experience);

    cout<<value<<endl;
    return value;
}*/

TeamLeader::TeamLeader(){ cout<<endl;}
/*
TeamLeader::TeamLeader(string &surname1, int age1, int experience1, float salary1) :Employee(surname1, age1, experience1, salary1){
        surname = surname1;
        age = age1;
        experience = experience1;
        salary = salary1;
}

float TeamLeader::calculateBonus(int value){
    
    value = value*(1+salary+experience);
    cout<<value<<endl;
    return value;
}
void TeamLeader::show(){
    cout << " Jestem TeamLeader z "<< experience <<" letnim doświadczeniem" << endl;
}
*/