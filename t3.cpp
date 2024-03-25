#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> myMap;

    myMap["a"] = 2;
    myMap["b"] = 3;
    myMap["c"] = 5;

    cout << "Key 'Prima 1': " << myMap["a"] << endl;
    cout << "Key 'Prima 2': " << myMap["b"] << endl;
    cout << "Key 'Prima 3': " << myMap["c"] << endl;

    return 0;
}
