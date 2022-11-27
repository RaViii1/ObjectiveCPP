#include <iostream>
#include <random>
#include "Array.h"

using namespace std;

int main(){

    Array<int> arrays(10);
    int random = 0;
    for(int i = 0; i <  10; i++){
        random = rand() % 100;
        arrays.Add(random);

    }

    arrays.Show();//przed sortem
    arrays.MaxInArray();
    arrays.SortUp();
    arrays.Show();
    arrays.MaxInArray();
    cout <<endl<< "Strings:" <<endl;
    Array<string> arrays2(3);
    arrays2.Add("xxxxxx"); 
    arrays2.Add("xxxxxzzzzzzzzx"); 
    arrays2.Add("xDDDDDDDDDDDDDDDDDDDD"); 

    arrays2.MaxInArray();
    arrays2.SortUp();
    arrays2.Show();


}