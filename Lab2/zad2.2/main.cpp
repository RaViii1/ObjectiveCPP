#include <iostream>
#include "employee.cpp"
#include "developer.h"
#include "teamleader.h"

using namespace std;

   int howManyEarnLessThanMeanBonus (Employee **E, int n) {
      float avg = 0.0;
      for (int i = 0; i < n; i++) avg += E[i]->calculateBonus(1);
      avg /= n;
      int counter = 0;
      for (int i = 0; i < n; i++) {
         if (E[i]->calculateBonus(1) < avg) counter++;
      }
      cout << "\nPonizej sredniej bonusu rownego "<< avg <<" zarabia: " << counter <<" pracownikow." <<endl;
    return counter;
    }
    
 
 int main(){

    /*Employee employee1, employee("Maniek", 30, 7, 5631.32);
    employee.getSurname();
    employee.getAge();
    employee.getExperience();
    employee1.setData("Man", 0 ,0 ,0);
    employee1.getSurname();
    employee.show();
    employee.ageEmployment();*/


    
    Developer marek("Marek", 45, 5, 6666.50);
    marek.calculateBonus(3000); 
    marek.show();

    TeamLeader Stefan("Stefan", 69, 29, 66666);
    Stefan.show();
   
       Employee **E;
    E = new Employee*[4]; 

    E[0] = new Developer("Baran", 21, 6, 6200);
    E[1] = new Developer ("Marek", 45, 4, 6666.50);
    E[2] = new Developer("Torek", 32, 5, 2000);
    E[3] = new Developer("Borek", 27, 9, 3200);

    
    whoWorkForMoreThan5Years(E, 4);     
    howManyEarnLessThanMeanBonus(E, 4);    
    
    //TeamLeader lider("Maciek", 30 ,9,6000);    
    //lider.show();  
    //lider.calculateBonus(2);      
     
     return 0;
 }
 