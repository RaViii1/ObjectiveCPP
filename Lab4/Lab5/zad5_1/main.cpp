#include <iostream>
#include <vector>
#include <set>

using namespace std;

pair <int, int> getDuplicate (vector <int> arr) {
set <int> s;
int found = 0;
int suma= 0;

for (int i = 0; i < arr.size(); i++) {
        if(s.count(arr[i])){
            found = arr[i];
            suma -= found;
        }else{
            s.insert(arr[i]);
            suma += arr[i];
    }

   
} 
    return make_pair(found,suma);
}

int main () {

    vector <int> arr = {0, 2, 5, 3, 8, 9, 7, 1, 3, 4, 11};
    cout << "The duplicate numbers are: "<<getDuplicate(arr).first<<endl;
    cout<<"The sum of the numbers is: "<<getDuplicate(arr).second<<endl;

    return 0;
}