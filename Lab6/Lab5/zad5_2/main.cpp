#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void show (set <int> s) {  // printing set
    set <int>::iterator itr;
    cout<<"{ ";
    for (itr = s.begin(); itr != s.end(); itr++) cout<<*itr<<" ";
    cout<<"}"<<endl;
}

void set_XOR (set <int> s1, set <int> s2) {
    set <int> sSum, czWsp, sdiff;
    
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(sSum, sSum.begin())); //suma zbiorów
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(czWsp, czWsp.begin()));
    set_difference(sSum.begin(), sSum.end(), czWsp.begin(), czWsp.end(), insert_iterator<set<int>>(sdiff, sdiff.begin()));//Od sumy zbiorow odjemujemy czesc wspolna zbiorow
    
    cout <<"Zbiory s1 i s2:" << endl;
    show(s1);
    show(s2);
    cout << endl;
    show(sSum);//Suma zbiorow
    show(czWsp);//Iloczyn zbiorow
    cout << endl;
    show(sdiff);
}
int main () {
    
    set <int> s1 = {1, 2, 3, 4, 7, 9};
    set <int> s2 = {1, 2, 8, 4, 5, 10};
    set_XOR(s1, s2);

    return 0;
}