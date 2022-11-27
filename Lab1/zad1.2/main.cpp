 #include <iostream>
 #include "animal.cpp"

 
 using namespace std;
 
 int main(int argc, char **argv){

   int x=1,y;
    Animal a2(4,"dog", false);
    Animal a1;
    Dog dog, dog2("dog", 7,6);
    //a1.setNazwa();
    //a1.setLimbNr();
    //a1.setProtected();
    
    //a1.info(); //Dane o wczytanym zwirzeciu
    //dog.info(); //
  
   //
   
   /*dog.setSkillLevel(0,0);
   dog2.getSkillLevel(2); // 1-nawigowanie  2-tropienie
   dog.giveVoice();
   dog2.info(); */

   Cat cat;
   /*cat.getLevelOfMouseHunting();//Bez zainicjalizowania
   cat.setLevelOfMouseHunting(0);
   cat.getLevelOfMouseHunting();
   cat.initMice();
   cat.getMice(0);
   cat.info();//
   cat.giveVoice(); */
   Animal Zwierzaki[5] = {{4, "Doggie", true},
                              {4, "Doggie", true},
                              {4, "dog", false},
                              {4, "cat", false},
                              {4, "brrrrr", false}};
  
  Zwierzaki->howManyProtectedAnimals(Zwierzaki, 5);
  
  Dog Psy[5] = {{"Lablador", 5, 9},
                {"Inny", 7, 6},
                {"Lablador",9,10},
                {"Inny",9,4},
                {"Lablador",9,10}};

  Psy->howManyTrackerDogs(Psy, 5);
  
  /*Cat koty[2] = {{5, {1,3,4,7,10}},
                {9, {10,3,4,7,10}}};
 
  koty->howManyCats(koty,2);*/
 }