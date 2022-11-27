#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>

using namespace std;
 
 
class Animal{
    protected:
    int limbNr;
    string name;
    bool protectedAnimal = true;
    
    public:
    Animal();
    Animal(int limbNr, string name, bool protectedAnimal);


    string getNazwa(string n);
    string setNazwa();
    int getLimbNr();
    int setLimbNr();
    bool  getProtected();
    bool setProtected();

    void giveVoice();
    virtual void info();
    void howManyProtectedAnimals(Animal Zwierzaki[], int n);

}; 

class Dog : public Animal{

    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
    
    public:

      Dog();

      Dog(string breed1, int levelOfGuideSkills1, int levelOfTrackerSkills1) /*: Animal(limbNr, name,protectedAnimal)*/{
          breed = breed1;
          levelOfGuideSkills = levelOfGuideSkills1;
          levelOfTrackerSkills = levelOfTrackerSkills1;
      }
 
      
    int setSkillLevel(int type, int value);
    void getSkillLevel(int type);

    void giveVoice(){
      cout<< "Hau, hau hau"<<endl;
    }
    void info();
    void howManyTrackerDogs(Dog Psy[], int size);
};

class Cat : public Animal{
  protected:
    int levelOfMouseHunting=0;
    int mice[5];
  
  public:
    Cat();
    Cat(int lvl, int mice1[5]);
    void initMice();  //zainicjalizowanie wartościami tablicy mice
    void initCat(); //inicjalizację wszystkich składowych klasy Cat
    int setLevelOfMouseHunting(int value);
    void getLevelOfMouseHunting();
    void getMice(int index);
    void giveVoice(){
      cout<< "Miau, miau"<<endl;
    }
    void info();
    void howManyCats(Cat koty[], int size);
};

 #endif // ANIMAL_H_INCLUDED