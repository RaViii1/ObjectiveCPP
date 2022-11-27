 #include <iostream>
 #include "Person.cpp"
 #include "Teacher.cpp"
#include "Student.cpp"
 #include <vector>

 using namespace std;
 


 int main()
 {
    cout<<endl<<"Obiekty klasy Person"<<endl;
    Person o1("Grazyna","Nowak",45);
    o1.showInfoPerson();

    cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
    o1.setAge(16);
    
    cout<<endl<<"Obiekty klasy Teacher"<<endl;
    Teacher n1("Barbara","Kowalska",56,30,"Phd");
    n1.showInfoTeacher();
    
    cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
    n1.setAge(34);

    //student
    cout<<"///////////////////////////////////"<<endl;
    Student st1("Maciek","Nowak","45123");
    st1.showInfoStudent();
    
    //inicjalizajca tablic
   
    Student S1[3];
    Student* S2;
    Student* S3[3];
    Student** S4;
    
    //Statyczna tablica statycznych obiektów student
    for(int i=0; i<3; i++)
    {
        S1[i].init("Anna","Nowak","123124");
        S1[i].showInfoStudent();
    }
    
    //dynamiczna tablica statycznych obiektów
    S2=new Student[3];
    for(int i=0; i<3; i++)
    {
    S2[i].init("Ola","Adamek","20"+i);
    S2[i].showInfoStudent();
    }
    //statyczna tablica dynamicznych obiektów
    for (int i = 0; i < 3; i++)
    {
        S3[i]=new Student("kasia", "kowalska", "1231"+i);
        S3[i]->showInfoStudent();
    }   
    
    //dynamiczna tablica dynamicznych obiektów

    S4=new Student*[3];
    for(int i=0; i<3; i++)
    {
        S4[i]=new Student("basia", "dasasd", "12312");
        S4[i]->showInfoStudent();
    }

    for(int i=0;i<3;i++){
        delete S3[i];
 }
    for(int i=0;i<3;i++){
        delete S4[i];
    }

    delete [] S4;
        
return 0;
    
} 