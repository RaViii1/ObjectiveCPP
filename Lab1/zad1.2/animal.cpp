 #include <iostream>
 #include "animal.h"
 #include <typeinfo>

 using namespace std;

 Animal::Animal(){
 }

 Animal::Animal(int n, string name1, bool prt){
   name = name1;
   limbNr = n;
   protectedAnimal = prt;
 }

 string Animal::getNazwa(string n)
 {
    return n;
 }

 string  Animal::setNazwa()
 {
    cout << "Podaj nazwę: " << endl;
    cin >> name;
    return name;
 }

  int Animal::getLimbNr()
 {
    return limbNr;
 }

 int Animal::setLimbNr()
 {
    cout << "Podaj liczbe konczyn: " << endl;
    cin >> limbNr;
    return limbNr;
 }


  bool  Animal::getProtected()
  {
      return protectedAnimal;
  }
  
  bool Animal::setProtected(){
    cout << "Czy zwierze jest chronione: " << endl;
    cin >> protectedAnimal;
    return protectedAnimal;
  }



    void Animal::info(){
      
      cout << "Animal info: " << endl <<endl;
      cout << "Name: " << name << endl;
      cout << "Limb nr: " << limbNr << endl;
      cout << "Protected: " << protectedAnimal << endl;

 }

 void Animal::howManyProtectedAnimals(Animal Zwierzaki[], int n){

    int counter=0;

    for (int i = 0; i < n; i++){
        if(Zwierzaki[i].protectedAnimal == true)
        counter += 1;
    }

    
    cout << "Liczba chronionych zwierzat: " << counter <<endl;
   
    

}
 

   void giveVoice(){
      cout<< "Chrum, miau, hau, piiii"<<endl;
 }

   Dog::Dog(){ cout<<endl;}


   void Dog::info() {
      
      //cout << "Animal info: " << endl <<endl;
      //cout << "Name: " << name << endl;
      //cout << "Limb nr: " << limbNr << endl;
      cout << "Rasa: "<< breed << endl;
      cout << "Umiejetnosci w nawigowaniu: "<<levelOfGuideSkills <<endl;
      cout << "umiejetnosci w tropieniu: "<<levelOfTrackerSkills <<endl;


 }

 int Dog::setSkillLevel(int type, int value){
  
   
   cout << "Podaj liczbe punktow od 1-10 "  << endl;
   cin >> value;
      
   cout << "Podaj poziom umiejetnosci: 1-nawigowaniu  2-tropieniu: "  << endl;
   cin >>type;
  
   while (true)
   {
        if(type == 1) {
         levelOfGuideSkills = value;
         return value;
      }
   else if(type == 2) {
         levelOfTrackerSkills = value;
         return value;
       }
   else cout << "Nie ma takiej umiejetnosci!" << endl;

   }
   
   return 0;

 }

  void Dog::getSkillLevel(int type)
{
 if(type == 1) {
         
          cout<<"Umiejetnosci w nawigowaniu: " << levelOfGuideSkills << endl;
      }
   else if(type == 2) {
         cout<<"Umiejetnosci tropicielskie:" << levelOfTrackerSkills << endl;
       }
   else cout << "Nie ma takiej umiejetnosci!" << endl;
}

   void Dog::howManyTrackerDogs(Dog Psy[], int size){

      int counter=0;

      for (int i = 0; i < size; i++){
         if(Psy[i].levelOfTrackerSkills > Psy[i].levelOfGuideSkills)
         counter += 1;
    }

    
    cout << "Liczba psow tropiacych: " << counter <<endl;
   }

 Cat::Cat(){
 }

 /* Cat::Cat(int lvl, int mice1[5]){
   levelOfMouseHunting = lvl;
   
   mice[5] = mice1[5];
 }
*/

 void Cat::initMice(){
   int miceNumber, year=1;
     for (int i = 1; i <6 ; i++)
   {
      cout <<"Rok ["<<year<<"] "<<" Podaj ilość myszy złowionych przez kota: ";
      cin >> miceNumber;
      mice[i-1] = miceNumber;
      year++;
      
   }
   cout << endl;
}

void Cat::info() {
   int j=1;
   cout << "Cat info: " << endl;
   cout << "Cat level of mouse hunting: " << levelOfMouseHunting << endl;
   cout << "Mice hunted: "  << endl;
   for   (int i = 0; i <5 ; i++){
      cout<<"Rok: "<< j <<" Złapane: "<< mice[i] << endl;
      j++;
   }
   
}
int Cat::setLevelOfMouseHunting(int value){
   do{
      cout << "Set Cat level in hunting value [1-10]: ";
      cin >> value;
      levelOfMouseHunting = value;
   }while(value < 0 || value > 10);

return value;
}

void Cat::getLevelOfMouseHunting(){
   if(levelOfMouseHunting == 0){
      cout << "Cat level in hunting : 0"<< endl;
   } else cout <<"Cat level in hunting : "<< levelOfMouseHunting << endl;
}

void Cat::getMice(int index){

   do
   {
      cout << "What year do you want to check <1,5>: ";
      cin >> index;
   } while (index < 1 || index > 5);
   
   cout << "Amount of mouse hunted in year "<< index <<" is: ";
   cout << mice[index-1] << endl;
}

/*void Cat::howManyCats(Cat koty[], int size){

      int suma[size] ;
    for (int i = 0; i < size; i++){
       for (int j = 0; j < 5; j++){
         suma[i] += koty[i].mice[j];
         }
         cout << "Kot nr: " << i << "Liczba uolowanych myszy: "<< suma[i]<<endl;
    }
}*/