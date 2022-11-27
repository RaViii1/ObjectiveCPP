#include <iostream>
#include "contacts.h"
using namespace std;
int main () {

    Contacts book;
    book.insert("Grzesiek", "Choiński", 60, "012345678", "Gdanska");
    book.insert("Marcin", "Basak", 15, "012345689", "Prysznicowa");
    book.insert("jakub", "Baran", 37, "234567890", "Strzyzewicka");
    book.insert("Mateusz", "Adamczyk", 42, "345678901", "Strzyzewicka");
    book.insert("Janek", "Tkaczyk", 21, "678901234", "Mickiewicza");
    book.insert("Bartek", "Baran", 17, "123456789", "Strzyzewicka");
    book.insert("Marek", "Pieczarek", 18, "123456789", "Pieczarska"); // Nie da się. Ten sam nr tel
    cout<<"Ksiazka: "<<endl;
    book.show();
    cout<<"Deleting 234567890: "<<endl;
    book.del("234567890");
    cout<<endl<<"Ksiazka bez jakuba:"<<endl;
    book.show();
    cout<<endl<<"Osoby mieszkajace przy ul. Strzyzewickiej:"<<endl;
    book.findByStreet("Strzyzewicka");
    cout<<endl<<"Osoby w wiekiem 20 - 70 lat:"<<endl;
    book.findByAge(21, 59);
    cout<<endl<<"Osoba o numerze tel. 678901234:"<<endl;
    book.findByPhone("678901234");
    book.changeStreetName("Strzyzewicka", "Osmolicka");
    cout<<endl<<"Ksiazka po zmianie z ul. Strzyzewicka na Osmolicka:"<<endl;
    book.show();

    cout<<endl<<"Liczba osob pelnoletnich: "<<book.CountAdults()<<endl; //5
    cout<<endl<<"Liczba unikatowych nazwisk: "<<book.CountUniqueSurnames()<<endl; //5


    return 0;
}