#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

void find(string s1, string s2){
    map<char,int> map1, map2;
    for (int i = 0; i < s1.length(); i++){
        ++map1[s1.at(i)];
    }
    for (int i = 0; i < s2.length(); i++){
            ++map2[s2.at(i)];
        }

    map<char, int>::iterator it;
    for ( it = map2.begin(); it != map2.end(); it++){
        
        char key = it->first;//Klucz
        int value = it->second;//Wartosc

        if(key != map1.find(key)->first || value != map1.find(key)->second){
            cout <<"Dodany znak to:" << key << endl;
        }
    }  
}
int main () {

    string s1 = "abcdefg";
    string s2 = "hgadcefb"; // h
    find (s1, s2);
    
    return 0;

}