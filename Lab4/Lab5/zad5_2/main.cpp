#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

template <class T> void show(set<T> s){
    cout <<"[ ";
    for (auto itr = s.begin(); itr != s.end(); itr++) cout << *itr<<" ";
    cout << " ]"<<endl;
}

template <class T> void set_Xor(set<T> s1, set<T> s2){
    set <T> sUnion, sIntersec, sUDiffer;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sUnion, sUnion.begin()));
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sIntersec, sIntersec.begin()));
    set_difference(sUnion.begin(), sUnion.end(), sIntersec.begin(), sIntersec.end(), insert_iterator(sUDiffer, sUDiffer.begin()));
    show(sUDiffer);
}

int main()
{
    set <int> s1 = {1, 2, 3, 5, 7, 9};
    set <int> s2 = {4, 2, 6, 8, 5, 7};
    set_Xor(s1, s2);
    cin.ignore();
    cin.get();
}