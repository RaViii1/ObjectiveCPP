#ifndef DICTIONARY_H_INCLUDED
#define DICTIONARY_H_INCLUDED

#include <iostream>
#include <map>

using namespace std;

class Dictionary{

    private:
        map<string,string> words;

    public:
        Dictionary();
        void addWord(string word, string translation);
        void deleteWord(string word);
        void show();
        void showWord(string word);
        void showInOrder();
        string lowerCase(string str);
        static bool compare(pair <string, string> translation1 , pair <string, string> translation2);

};
#endif // DICTIONARY_H_INCLUDED