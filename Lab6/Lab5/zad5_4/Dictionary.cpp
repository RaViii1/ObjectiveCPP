#include "Dictionary.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

Dictionary::Dictionary(){}

string Dictionary:: lowerCase(string str){
    string lowerString = "";
    for(int i = 0; i < str.length(); i++){
        if(str.at(i)>=65 && str.at(i)<=90){
            lowerString += str.at(i) +32;
        }else{
            lowerString += str.at(i);
        }
    }
    return lowerString;
}


void Dictionary::addWord(string word, string translation){
    string lowerWord = lowerCase(word);
    string lowerTrans = lowerCase(translation);
    if(this->words.find(lowerWord) != this->words.end()){
        cout << "To słowo znajduje sie w słowniku!" << endl;
    }else{
        auto newWord = make_pair(lowerWord, lowerTrans);
        this->words.insert(newWord);
    }
}

void Dictionary::deleteWord(string word){
    string lowerWord = lowerCase(word);
    if(this->words.find(lowerWord) == this->words.end()){
        cout << "Nie ma takiego słowa w słowniku"<<endl;
    }else{
        this->words.erase(lowerWord);
    }
}


void  Dictionary::show(){ 
    if(this->words.empty()){
        cout<<"Slownik jest pusty!"<<endl;
    }else{
        cout<<"Zawartosc slownika: "<<endl <<endl;
        for (map<string, string>::iterator i = this->words.begin(); i != this->words.end(); ++i){
            cout<<i->first<<" - "<<i->second<<endl;
        }
    }
}


void Dictionary::showWord(string word){
    string lowerWord = lowerCase(word);
    if(this->words.find(lowerWord) == this->words.end()){
        cout << "Nie ma takiego słowa w słowniku"<<endl;
    }else{
        cout << this->words.find(lowerWord)->first << " - "<<this->words.find(lowerWord)->second<<endl;     
    }
}

bool Dictionary::compare(pair <string, string> translation1 , pair <string, string> translation2){

    string  tr1 = translation1.second;
    string  tr2 = translation2.second;
    unsigned int t1lenght = tr1.length();
    unsigned int t2lenght = tr2.length();
    
    if (t1lenght > t2lenght){
        for (int i = t2lenght; i < t1lenght; i++){
            tr2 += '-';
        }
    }
    if (t1lenght < t1lenght){
        for (int i = t1lenght; i < t2lenght; i++){
            t1lenght += '-'; 
        }
    }
    t1lenght = tr1.length(); 

    for (int i = 0; i < t1lenght; i++) {
        if (tr1.at(i) > tr2.at(i)) return true;
        if (tr1.at(i) < tr2.at(i)) return false; //zamiana miejscami
    }

    return true;
}

void Dictionary::showInOrder(){
    if (this->words.empty()) {
        cout<<"Slownik jest pusty"<<endl;
    }
    else{
         vector <pair<string, string>> sorting;
        
        for (map<string, string>::iterator i = this->words.begin(); i != this->words.end(); ++i){
            sorting.push_back(make_pair(i->first, i->second));
        }
        sort(sorting.begin(), sorting.end(), compare);
        
        for (int i = 0; i < sorting.size(); i++){
            cout<<sorting[i].first<<" - "<<sorting[i].second<<endl;
        }
    }
}