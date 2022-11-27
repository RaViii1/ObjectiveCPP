#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <boost/bind.hpp>
#define MAX_M(a, b) a > b ? a : b
#define MIN_M(a, b) a < b ? a : b
using namespace std;

void Show (int Elem, bool ok) {
    if(ok) cout<<Elem<<" ";
}

template <typename T>
void Ststatsats (const vector < T > &Vec) {
    int s = Vec.size();
    double mean = 0.0;
    for (int i = 0; i < s; i++){
        mean+= Vec[i];
    } 
    mean /= s;

    vector < T > Vec2 = Vec;
    double mediana;
    sort(Vec2.begin(), Vec2.end());
    
    if (s % 2 == 0){
        mediana = 1.0 * (Vec2[(s / 2)] + Vec2[(s / 2) - 1]) / 2.0;
    } 
    else{
         mediana = Vec2[s / 2];
    }
    cout<<"Srednia: "<<mean<<endl;
    cout<<"Mediana: "<<mediana<<endl;
    
    cout<<"Elementy mniejsze od sredniej: ";
    for_each(Vec.begin(), Vec.end(), boost::bind(Show, _1, boost::bind(less<T>(), _1, mean)));
    
    cout<<endl<<"Elementy pomiedzy srednia a mediana: ";
    for_each(Vec.begin(), Vec.end(), boost::bind(Show, _1, boost::bind(logical_and<T>(), boost::bind(greater<T>(), _1, MIN_M(mean, median)), boost::bind(less<T>(), _1, MAX_M(mean, median)))));
    
    cout<<endl<<"Elementy dodatnie: ";
    for_each(Vec.begin(), Vec.end(), boost::bind(Show, _1, boost::bind(greater<T>(), _1, 0)));
}
int main () {
    
    vector < int > vals = {-5, 2, 4, -8, -6, 1, 4, 20, -10, 10, -2};
    cout<<"Tablica: ";
    for (int i = 0; i < vals.size(); i++) Show(vals[i], true);
    cout<<endl;
    stats(vals);

    return 0;
}