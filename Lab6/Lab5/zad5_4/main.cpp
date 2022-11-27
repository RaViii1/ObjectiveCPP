#include <iostream>
#include "Dictionary.h"
#include "Dictionary.cpp"

using namespace std;
int main(){
    Dictionary dictionary;
    dictionary.show(); //Pusty

    dictionary.addWord("Dom", "House");
    dictionary.show();
    cout << "Usuniecie slowa Dom:" <<endl;
    dictionary.deleteWord("Dom");
    cout << endl;
    dictionary.show(); //Pusty
    cout<<endl;
    
    dictionary.addWord("klip", "Clip");
    dictionary.addWord("Pies", "Dog");
    dictionary.addWord("Kot", "Cat");
    dictionary.addWord("Szalik", "Scarf");
    dictionary.addWord("Alpaka", "Alpaca");
    dictionary.addWord("Alpakaa", "Alpacaaa");
    dictionary.addWord("Dywan", "Carpet");
    dictionary.addWord("pokoj", "Zimmer");
    dictionary.addWord("Zebra", "Zebra");
    dictionary.addWord("zabrac", "Zebrane");
    dictionary.addWord("Pies", "Dog");
    dictionary.show();
    cout<<endl << "Wybrane słowo:" <<endl;
    //dictionary.showWord("Alpaka");
    cout<<endl << "Posortowane od z do a dla tłumaczenia:" <<endl;
    dictionary.showInOrder();
}